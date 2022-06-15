# encoding: UTF-8
# Copyright 2015 by Peter Ohler, All Rights Reserved

require 'member'

class Comp

  attr_reader :name
  attr_reader :members

  def initialize(xe)
    @name = xe.attributes['name']
    @members = []
    xe.nodes.each { |n|
      next unless ('field' == n.name || 'group' == n.name || 'component' == n.name)
      @members << Member.new(n)
    }
  end

  def gen_c(f)
    f.write("        #{@name}")
  end

end # Comp
