// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#include <stdio.h>
#include <stdlib.h>

#include "test.h"

extern void	ofix_destroy_specs(void);

extern void	append_get_tests(Test tests);
extern void	append_set_tests(Test tests);
extern void	append_append_tests(Test tests);
extern void	append_insert_tests(Test tests);
extern void	append_remove_tests(Test tests);
extern void	append_iterator_tests(Test tests);
extern void	append_parse_tests(Test tests);
extern void	append_store_tests(Test tests);
extern void	append_engine_tests(Test tests);
extern void	benchmark(int iter);

int
main(int argc, char **argv) {
    struct _Test	tests[100] = { { NULL, NULL } };
    /*
    append_get_tests(tests);
    append_set_tests(tests);
    append_append_tests(tests);
    append_insert_tests(tests);
    append_remove_tests(tests);
    append_iterator_tests(tests);
    append_parse_tests(tests);
    */

    //append_store_tests(tests);
    append_engine_tests(tests);

    test_init(argc, argv, "oFIX", tests);

    ofix_destroy_specs();
    test_done();

    //benchmark(10000);

    return 0;
}
