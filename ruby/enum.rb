
# encoding: UTF-8
# Copyright 2015 by Peter Ohler, All Rights Reserved

class Enum

  attr_reader :name
  attr_reader :tag

  def initialize(xe)
    @value = xe.attributes['enum']
    @desc = xe.attributes['description']
    unless @desc.nil?
      @desc = @desc.split('_').map { |w| w.capitalize }.join(' ')
    end
  end

  def gen_c(f)
    f.write("        #{@value} - #{@desc}")
  end

end # Enum