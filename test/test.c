// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#include <stdarg.h>
#include <sys/time.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "test.h"

static void	usage(const char *appName);
static Test	find_test(const char *name);

FILE		*test_out = NULL;
int		test_verbose = 0;

static const char	*group = NULL;
static Test		tests = NULL;
static Test		current_test = NULL;

void
test_print(const char *format, ...) {
    va_list	ap;

    va_start(ap, format);
    vfprintf(test_out, format, ap);
    va_end(ap);
}

void
test_append(Test tests, const char *name, void (*func)(void)) {
    for (; NULL != tests->name; tests++) {
    }
    tests->name = name;
    tests->func = func;
    tests++;
    tests->name = NULL;
    tests->func = NULL;
}

void
test_init(int argc, char **argv, const char *group_name, Test all_tests) {
    Test	t;
    char	*app_name = *argv;
    char	*a;
    int		runAll = 1;

    test_out = stdout;
    tests = all_tests;
    group = group_name;
    for (t = tests; t->name != 0; t++) {
	t->pass = -1;
	t->run = 0;
    }
    argc--;
    argv++;
    for (; 0 < argc; argc--, argv++) {
	a = *argv;
	if (0 == strcmp("-o", a)) {
	    argc--;
	    argv++;
	    if (0 == (test_out = fopen(*argv, "a"))) {
		printf("Failed to open %s\n", *argv);
		usage(app_name);
	    }
	} else if (0 == strcmp("-c", a)) {
	    argc--;
	    argv++;
	    if (0 == (test_out = fopen(*argv, "w"))) {
		printf("Failed to open %s\n", *argv);
		usage(app_name);
	    }
	} else if (0 == strcmp("-v", a)) {
	    test_verbose = 1;
	} else {
	    if (0 == (t = find_test(a))) {
		printf("%s does not contain test %s\n", group, a);
		usage(app_name);
	    }
	    t->run = 1;
	    runAll = 0;
	}
    }
    if (runAll) {
	for (t = tests; t->name != 0; t++) {
	    t->run = 1;
	}
    }
    test_print("%s tests started\n", group);

    for (current_test = tests; NULL != current_test->name; current_test++) {
	if (current_test->run) {
	    if (1 <= test_verbose) {
		test_print("  %s\n", current_test->name);
	    }
	    current_test->func();
	}
    }
}

void
test_done(void) {
    char	nameFormat[32];
    Test	t;
    char	*result = "Skipped";
    time_t	tt;
    int		cnt = 0;
    int		fail = 0;
    int		skip = 0;
    int		len, maxLen = 1;
    
    for (t = tests; t->name != 0; t++) {
	len = strlen(t->name);
	if (maxLen < len) {
	    maxLen = len;
	}
    }
    sprintf(nameFormat, "  %%%ds: %%s\n", maxLen);
    test_print("Summary for %s:\n", group);
    for (t = tests; t->name != 0; t++) {
	switch (t->pass) {
	case -1:
	    result = "Skipped";
	    skip++;
	    break;
	case 0:
	    result = "FAILED";
	    fail++;
	    break;
	case 1:
	default:
	    result = "Passed";
	    break;
	}
	cnt++;
	test_print(nameFormat, t->name, result);
    }
    test_print("\n");
    if (0 < fail) {
	test_print("%d out of %d tests failed for %s\n", fail, cnt, group);
	if (0 < skip) {
	    test_print("%d out of %d skipped\n", skip, cnt);
	}
	test_print("%d out of %d passed\n", (cnt - fail - skip), cnt);
    } else if (0 < skip) {
	test_print("%d out of %d skipped\n", skip, cnt);
	test_print("%d out of %d passed\n", (cnt - skip), cnt);
    } else {
	test_print("All %d tests passed!\n", cnt);
    }
    tt = time(0);
    test_print("%s tests completed %s