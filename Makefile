

all:
	make -C src
	make -C test

clean:
	make -C src clean
	make -C test clean

spec:
	ruby/fix_ref_to_c.rb -o src/spec/fix40.c ref/FIX40.xml
	ruby/fix_ref_to_c.rb -o src/spec/fix41.c ref/FIX41.xml
	ruby/fix_ref_to_c.rb -o src/spec/fix42.c ref/FIX42.xml
	ruby/fix_ref_to_c.rb -o src/spec/fix43.c ref/FIX43.xml
	ruby/fix_ref_to_c.rb -o src/spec/fix44.c ref/FIX44.xml

test: all
	make -C test test