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
	    if (0 =