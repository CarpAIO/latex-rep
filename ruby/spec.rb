
# encoding: UTF-8
# Copyright 2015 by Peter Ohler, All Rights Reserved

require 'field'
require 'comp'
require 'msg'

class Spec

  attr_reader :header
  attr_reader :trailer
  attr_reader :major
  attr_reader :minor

  def initialize(doc)
    @major = doc.attributes['major']
    @minor = doc.attributes['minor']
    @fields = {}
    @comps = {}
    @msgs = {}

    load_fields(doc.locate('fields')[0])
    load_components(doc.locate('components')[0])

    @header = Member.new(doc.locate('header')[0])
    @trailer = Member.new(doc.locate('trailer')[0])

    @header.members.each { |m|
      set_member_where(m, 'Header')
    }
    @trailer.members.each { |m|
      set_member_where(m, 'Trailer')
    }
    load_messages(doc.locate('messages')[0])
    @comps.each_value { |msg| tag_members(msg.members) }

    @msgs.each_value { |msg| msg.expand_components(self) }

    @msgs.each_value { |msg| tag_members(msg.members) }
  end

  def tag_members(ma)
    ma.each { |m|
      unless m.name.nil?
        f = find_field(m.name)
        m.tag = f.tag unless f.nil?
      end
      tag_members(m.members) unless m.members.empty?
    }
  end

  def set_member_where(m, where)
    raise Exception.new("Failed for find tag #{m.name} from #{where}") if (f = find_field(m.name)).nil?
    f.where = where
    m.members.each { |m2| set_member_where(m2, where) }
  end

  def load_fields(xe)
    xe.nodes.each { |n|
      next unless 'field' == n.name
      f = Field.new(n)
      @fields[f.name] = f
    }
    @fields.each_value { |f|
      if 'Length' == f.type
        @fields.each_value { |r|
          next if f == r
          if f.name.start_with?(r.name)
            f.related = r.tag
            r.related = f.tag
            break
          end
        }
      end
      if 'NumInGroup' == f.type
        # TBD for each num in group look at component for first field not
        # necessary as repeating group ids are the same as tag number
      end
    }
  end

  def load_components(xe)
    return if xe.nil?
    xe.nodes.each { |n|
      next unless 'component' == n.name
      c = Comp.new(n)
      @comps[c.name] = c
    }
  end

  def load_messages(xe)
    xe.nodes.each { |n|
      next unless 'message' == n.name
      m = Msg.new(n, self)
      @msgs[m.name] = m
    }
  end

  def find_field(field_name)
    @fields[field_name]
  end

  def find_component(comp_name)
    @comps[comp_name]
  end

  def gen_c(f)
    f.write(%|
// This file is auto-generated from ref/FIX#{@major}#{@minor}.xml and should not be modified.

#include "ofix/tagspec.h"
#include "ofix/tagreq.h"
#include "ofix/msgspec.h"
#include "ofix/versionspec.h"

extern struct _ofixVersionSpec	fix#{@major}#{@minor}Spec;

// ----- Tags -----
static struct _ofixTagSpec	tags[] = {
|)

    @fields.values.sort_by { |x| x.tag }.each { |field|
      field.gen_c(f)
    }
    f.write(%|    { 0 }
};

// ----- Messages -----
|)
    @msgs.values.sort_by { |m| m.type }.each { |m|
      m.gen_c(f, self)
    }
    f.write(%|

// FIX Version #{@major}.#{@minor}
struct _ofixVersionSpec	fix#{@major}#{@minor}Spec = {
    #{@major}, // majorVersion
    #{@minor}, // minorVersion
    "FIX.#{@major}.#{@minor}", // id
    false, // ready
    tags, // tags
    { 0 }, // tagTable
    {
|)
    
    @msgs.values.sort_by { |m| m.type }.each { |m|
      f.write("\t&#{m.name},\n")
    }    
    f.write(%|\t0
    }
};
|)
  end

end # Spec