
# encoding: UTF-8
# Copyright 2015 by Peter Ohler, All Rights Reserved

class Msg

  attr_reader :name
  attr_reader :type
  attr_reader :members

  def initialize(xe, spec)
    @name = xe.attributes['name']
    @groups = []
    @type = xe.attributes['msgtype']
    @cat = xe.attributes['msgcat']
    @shared = false
    @desc = xe.attributes['description']
    @members = [spec.header]
    xe.nodes.each { |n|
      next unless ('field' == n.name || 'group' == n.name || 'component' == n.name)
      @members << Member.new(n)
    }
    @members << spec.trailer
  end

  def tid()
    id = 0
    @type.bytes.each { |b|
      id = (id << 8) + b
    }
    id
  end

  def gen_group(f, g, spec)
    f.write(%|
static struct _ofixGroupSpec	#{@name}Group#{g.tag} = {
    #{g.tag}, // #{g.name}
    {
|)
    g.members.each { |m|
      f.write("\t{ #{m.tag}, #{m.required} }, // #{m.name}\n")
    }
    f.write(%|\t{ 0, false }
    }
};
|)
  end

  def gen_groups(f, ma, spec, group_tags)
    ma.each { |m|
      if 'group' == m.kind
        group_tags << m.tag
        gen_group(f, m, spec)
      end
      gen_groups(f, m.members, spec, group_tags) unless m.members.empty?
    }
  end

  def expand_components(spec)
    ma = []
    @members.each { |m| m.expand(spec, ma) }
    @members = ma
  end

  def expand(ma, expanded)
    ma.each { |m|
      if 'field' == m.kind || 'group' == m.kind
        expanded << m
      else
        expand(m.members, expanded) unless m.members.empty?
      end
    }
  end

  def gen_c(f, spec)
    expanded = []
    expand(@members, expanded)
    f.write("// #{@name} [#{@type}]\n")
    group_tags = []
    gen_groups(f, @members, spec, group_tags)
    f.write(%|
static ofixGroupSpec	#{@name}Groups[] = {
|)
    group_tags.each { |gt|
      f.write("    &#{@name}Group#{gt},\n")
    }
    f.write(%|    0
};
|)

    tagSeq = [0] * 1000
    seq = 1
    expanded.each { |m|
      tagSeq[m.tag] = seq if 0 < m.tag && m.tag < 1000
      seq += 1
    }
    f.write(%|
static struct _ofixMsgSpec	#{@name} = {
    &fix#{spec.major}#{spec.minor}Spec, // version
    #{tid()}, // tid
    "#{@type}", // type
    "#{@name}", // name
    {#{tagSeq.join(',')}},
    #{@name}Groups, // groups
    {
|)
    expanded.each { |m|
      f.write("\t{ #{m.tag}, #{m.required} }, // #{m.name}\n")
    }
    f.write(%|\t{ 0, false }
    }
};

|)
  end

end # Msg