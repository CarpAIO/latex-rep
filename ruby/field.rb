# encoding: UTF-8
# Copyright 2015 by Peter Ohler, All Rights Reserved

require 'enum'

class Field

  attr_accessor :tag
  attr_accessor :name
  attr_accessor :type
  attr_accessor :where
  attr_accessor :related

  def initialize(xe)
    @tag = xe.attributes['number'].to_i
    @name = xe.attributes['name']
    @type = ofix_type(xe.attributes['type'])
    @where = 'Body'
    @desc = xe.attributes['description']
    @related = 0
    @enums = nil
    if 0 < xe.nodes.size
      @enums = []
      xe.nodes.each { |n|
        next unless n.is_a?(Ox::Element) && n.name == 'value'
        @enums << Enum.new(n)
      }
    end

  end

  def gen_c(f)
    f.write(%|    { #{@tag}, OFIX_#{@type}, OFIX_#{@where}, #{@related}, #{@tag.to_s.size + 1}, "#{@tag}=", "#{@name}" },
|)
  end

  def ofix_type(t)
    oft = {
      'AMT' => 'Amt',
      'BOOLEAN' => 'Boolean',
      'CHAR' => 'Char',
      'COUNTRY' => 'Country',
      'CURRENCY' => 'Currency',
      'DATA' => 'Data',
      'DATE' => 'UTCDateOnly',
      'DAYOFMONTH' => 'DayOfMonth',
      'EXCHANGE' => 'Exchange',
      'FLOAT' => 'Float',
      'LENGTH' => 'Length',
      'LOCALMKTDATE' => 'LocalMktDate',
      'MONTHYEAR' => 'MonthYear',
      'MULTIPLEVALUESTRING' => 'MultipleValueString',
      'NUMINGROUP' => 'NumInGroup',
      'PERCENTAGE' => 'Percentage',
      'PRICE' => 'Price',
      'PRICEOFFSET' => 'PriceOffset',
      'QTY' => 'Qty',
      'SEQNUM' => 'SeqNum',
      'STRING' => 'String',
      'TIME' => 'Time',
      'UTCDATE' => 'UTCDateOnly',
      'UTCDATEONLY' => 'UTCDateOnly',
      'UTCTIMEONLY' => 'UTCTimeOnly',
      'UTCTIMESTAMP' => 'UTCTimestamp',
      'INT' => 'Int',
    }[t]
    raise Exception.new("#{t} is not a valid tag type") if oft.nil?
    oft
  end

end # Field
