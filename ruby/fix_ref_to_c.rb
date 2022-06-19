
#!/usr/bin/env ruby
# encoding: UTF-8
# Copyright 2015 by Peter Ohler, All Rights Reserved

# Ubuntu does not accept arguments to ruby when called using env. To get warnings to show up the -w options is
# required. That can be set in the RUBYOPT environment variable.
# export RUBYOPT=-w

$VERBOSE = true

$: << File.dirname(__FILE__)
while (index = ARGV.index('-I'))
  _, path = ARGV.slice!(index, 2)
  $: << path
end

require 'optparse'
require 'ox'
require 'spec'

$verbosity = 1
$out_path = nil

$opts = OptionParser.new(%|Usage: ofix_ref_to_c.rb [options] <xml-ref>

Generates an oFIX C spec file. The input file must be an XML file in the same
format as those downloaded from http://www.quickfixengine.org. The output file
will be suitable for inclusion as the reference data for the oFIX library.
|)
$opts.on('-s', 'decrease verbosity')                                   { $verbosity += 1 }
$opts.on('-v', 'increase verbosity')                                   { $verbosity -= 1 }
$opts.on('-I', '--load-path String', String, 'load path')              { |p| $: << p }
$opts.on('-o', '--outfile String', String, 'output file path')         { |p| $out_path = p }
$opts.on('-h', '--help', 'Show this display')                          { puts $opts.help; Process.exit!(0) }
files = $opts.parse(ARGV)

def usage(msg)
  puts msg
  puts $opts.help
  Process.exit!(1)
end

usage('No files specified.') if 0 == files.size()
usage('Too many files specified.') if 1 < files.size()

$input_filename = files[0]

begin
  doc = Ox::load_file($input_filename, mode: :generic, trace: $verbosity, symbolize_keys: false)
  spec = Spec.new(doc)
  if $out_path.nil?
    spec.gen_c(STDOUT)
  else
    File.open($out_path, 'w') { |f| spec.gen_c(f) }
  end
rescue Exception => e
  puts "-*-*- #{e.class}: #{e.message}"
  e.backtrace.each { |line| puts "    #{line}" }
end