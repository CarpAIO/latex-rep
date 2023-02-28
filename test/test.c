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
    test_print("%s tests completed %s\n", group, ctime(&tt));
    if (stdout != test_out) {
	fclose(test_out);
    }
    // exit((cnt << 16) | fail);
    //exit(0);
}

int
test_same(const char *expected, const char *actual) {
    const char	*e = expected;
    const char	*a = actual;
    int		line = 1;
    int		col = 1;
    int		pass = 1;

    if (expected == actual) {
	if (current_test->pass != 0) {	// don't replace failed status
	    current_test->pass = 1;
	}
	return 1;
    }
    if (0 == actual || 0 == expected) {
	current_test->pass = 0;
	return 0;
    }
    for (; '\0' != *e && '\0' != *a; e++, a++) {
	if (*e == *a || '?' == *e) {
	    if ('\n' == *a) {
		line++;
		col = 0;
	    }
	    col++;
	} else if ('$' == *e) {	// a digit
	    if ('0' <= *a && *a <= '9') {
		while ('0' <= *a && *a <= '9') {
		    a++;
		    col++;
		}
		a--;
	    } else {
		pass = 0;
		break;
	    }
	} else if ('#' == *e) {	// hexidecimal
	    if (('0' <= *a && *a <= '9') ||
		('a' <= *a && *a <= 'f') ||
		('A' <= *a && *a <= 'F')) {
		while (('0' <= *a && *a <= '9') ||
		       ('a' <= *a && *a <= 'f') ||
		       ('A' <= *a && *a <= 'F')) {
		    a++;
		    col++;
		}
		a--;
	    } else {
		pass = 0;
		break;
	    }
	} else if ('*' == *e) {
	    const char	ne = *(e + 1);

	    while (ne != *a && '\0' != *a) {
		a++;
		col++;
	    }
	    a--;
	} else {
	    pass = 0;
	    break;
	}
    }
    if ('\0' != *a) {
	if ('\0' == *e) {
	    test_print("%s.%s Failed: Actual result longer than expected\n", group, current_test->name);
	    pass = 0;
	    if (test_verbose) {
		test_print("expected: '%s'\n", expected);
		test_print("  actual: '%s'\n\n", actual);
	    }
	} else {
	    test_print("%s.%s Failed: Mismatch at line %d, column %d\n", group, current_test->name, line, col);
	    if (test_verbose) {
		test_print("expected: '%s'\n", expected);
		test_print("  actual: '%s'\n\n", actual);
	    }
	    pass = 0;
	}
    } else if ('\0' != *e) {
	test_print("%s.%s Failed: Actual result shorter than expected\n", group, current_test->name);
	pass = 0;
	if (test_verbose) {
	    test_print("expected: '%s'\n", expected);
	    test_print("  actual: '%s'\n\n", actual);
	}
    }
    if (current_test->pass != 0) {	// don't replace failed status
	current_test->pass = pass;
    }
    return pass;
}

void
test_fail() {
    test_print("%s.%s Failed\n", group, current_test->name);
    current_test->pass = 0;
}

int
test_true(bool condition) {
    if (!condition) {
	test_print("%s.%s Failed: Condition was false\n", group, current_test->name);
	current_test->pass = 0;
    } else {
	if (current_test->pass == -1) {	// don't replace failed status
	    current_test->pass = 1;
	}
    }
    return condition;
}

int
test_false(bool condition) {
    if (condition) {
	test_print("%s.%s Failed: Condition was true\n", group, current_test->name);
	current_test->pass = 0;
    } else {
	if (current_test->pass == -1) {	// don't replace failed status
	    current_test->pass = 1;
	}
    }
    return !condition;
}

char*
test_load_file(const char *filename) {
    FILE	*f;
    char	*buf;
    long	len;

    if (0 == (f = fopen(filename, "r"))) {
	test_print("Error: failed to open %s.\n", filename);
	return 0;
    }
    fseek(f, 0, SEEK_END);
    len = ftell(f);
    if (0 == (buf = malloc(len + 1))) {
	test_print("Error: failed to allocate %ld bytes for file %s.\n", len, filename);
	return 0;
    }
    fseek(f, 0, SEEK_SET);
    if (len != fread(buf, 1, len, f)) {
	test_print("Error: failed to read %ld bytes from %s.\n", len, filename);
	fclose(f);
	return 0;
    }
    fclose(f);
    buf[len] = '\0';

    return buf;
}

void
test_report_test(const char *testName) {
    Test	t = find_test(testName);
    const char	*result;

    if (0 == t) {
	if (0 != testName) {
	    return;
	}
	t = current_test;
	if (0 == t) {
	    return;
	}
    }
    switch (t->pass) {
    case -1:
	result = "Skipped";
	break;
    case 0:
	result = "FAILED";
	break;
    case 1:
    default:
	result = "Passed";
	break;
    }
    test_print("%s: %s", t->name, result);
}

void
test_reset_test(const char *testName) {
    Test	t = find_test(testName);

    if (0 == t) {
	if (0 != testName) {
	    return;
	}
	t = current_test;
	if (0 == t) {
	    return;
	}
    }
    t->pass = -1;
}

static void
usage(const char *app_name) {
    printf("%s [-m] [-o file] [-c file]\n", app_name);
    printf("  -o file  name of output file to append to\n");
    printf("  -c file  name of output file to create and write to\n");
    exit(0);
}

static Test
find_test(const char *name) {
    if (0 != name) {
	Test	t;

	for (t = tests; t->name != 0; t++) {
	    if (0 == strcmp(name, t->name)) {
		return t;
	    }
	}
    }
    return 0;
}

void
test_hex_dump(const uint8_t *data, int len) {
    const uint8_t	*b = data;
    const uint8_t	*end = data + len;
    char		buf[20];
    char		*s = buf;
    int			i;

    for (; b < end; b++) {
        printf("%02X ", *b);
	if (' ' <= *b && *b < 127) {
	    *s++ = (char)*b;
	} else {
	    *s++ = '.';
	}
	i = (b - data) % 16;
        if (7 == i) {
            printf(" ");
	    *s++ = ' ';
        } else if (15 == i) {
	    *s = '\0';
            printf("  %s\n", buf);
	    s = buf;
        }
    }
    i = (b - data) % 16;
    if (0 != i) {
	if (i < 8) {
	    printf(" ");
	}
	for (; i < 16; i++) {
	    printf("   ");
	}
	*s = '\0';
	printf("  %s\n", buf);
    }
}

char*
test_to_code_str(const uint8_t *data, int len) {
    const uint8_t	*d;
    const uint8_t	*end = data + len;
    int			clen = 0;
    char		*str;
    char		*s;
    
    for (d = data; d < end; d++) {
	if (*d < ' ' || 127 <= *d) {
	    clen += 4;
	} else if ('"' == *d || '\\' == *d) {
	    clen += 3;
	} else {
	    clen++;
	}
    }
    if (0 == (str = (char*)malloc(clen + 1))) {
	return 0;
    }
    for (s = str, d = data; d < end; d++) {
	if (*d < ' ' || 127 <= *d) {
	    *s++ = '\\';
	    *s++ = '0' + (*d >> 6);
	    *s++ = '0' + ((*d >> 3) & 0x07);
	    *s++ = '0' + (*d & 0x07);
	} else if ('"' == *d || '\\' == *d) {
	    *s++ = '\\';
	    *s++ = '\\';
	    *s++ = *d;
	} else {
	    *s++ = *d;
	}
    }
    *s = '\0';
    
    return str;
}
