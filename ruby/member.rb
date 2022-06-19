
# encoding: UTF-8
# Copyright 2015 by Peter Ohler, All Rights Reserved

class Member
  attr_accessor :kind
  attr_accessor :name
  attr_accessor :required
  attr_accessor :members
  attr_accessor :tag

  def initialize(xe)
    @name = xe.attributes['name']
    @kind = xe.name
    @required = ('Y' == xe.attributes['required'])
    @members = []
    xe.nodes.each { |n|
      next unless ('field' == n.name || 'group' == n.name || 'component' == n.name)
      @members << Member.new(n)
    }
    @tag = 0 # filled in later
  end

  def expand(spec, ma)
    if 'component' == @kind
      if @name.nil? # header or trailer
        @members.each { |m| m.expand(spec, ma) }
      else
        raise Exception.new("failed to find component #{@name}.") if (c = spec.find_component(@name)).nil?
        c.members.each { |m| m.expand(spec, ma) }
      end
    elsif 'group' == @kind
      a = []
      @members.each { |m| m.expand(spec, a) }
      @members = a
      ma << self
    else
      ma << self
    end
  end

end # Member