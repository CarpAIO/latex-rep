
// Copyright 2009, 2015 by Peter Ohler, All Rights Reserved

#ifndef __OFIX_TEST_H__
#define __OFIX_TEST_H__

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

/**
 * @file test.h
 *
 * A unit test framework is provided by the functions in this file. Tests are
 * composed of multiple test cases. Each test case has a name and a function
 * that should run the test. Results are collected using comparison
 * functions. Output from tests is sent to stdout and optionally to a file.
 */
 
/**
 * Structure for listing the test cases in when calling the test_init()
 * function. Only the <i>name</i> and <i>func</i> members need to be set.
 */
typedef struct _Test {
    const char	*name;		// name of test case
    void	(*func)(void);	// function to run to execute test case
    int		pass;		// ignored
    int		run;		// ignored
} *Test;

extern void	test_append(Test tests, const char *name, void (*func)(void));

/**
 * Initializes the test framework and runs the specified tests. The
 * <i>argc</i> and <i>argv</i> arguments should be the command line arguments
 * to the application. The usage for the command line is. <pre>
 *     [-m] [-o file] [-c file]
 *       -m       turns on memory usage test
 *       -o file  name of output file to append to
 *       -c file  name of output file to create and write to
 * </pre>
 * The allTests array should be terminated with a Test with a name value of 0
 * (NULL).
 * @param argc same as main argc
 * @param argv same as main argv
 * @param groupName name oa test suite
 * @param allTests tests to execute, 0 name terminated
 */
extern void	test_init(int argc, char **argv, const char *groupName, Test allTests);

/**
 * Prints to the unit test output file and to stdout. It uses the standard
 * printf formating rules.
 * @param format printf format specification
 * @param ... additional arguments to printf
 */
extern void	test_print(const char *format, ...);

/**
 * Cleans up and outputs the test results.
 */
extern void	test_done(void);

/**
 * Compares two strings. If they are the same then the test passes. If not it
 * is marked as failing. The <i>expected</i> string can contain special wild
 * card characters that match specific patterns. The wild card characters are:
 * <ul>
 *  <li><b>?</b> - match exactly one character, any character
 *  <li><b>$</b> - match a decimal number
 *  <li><b>#</b> - match a hexidecimal number (0-9,a-f,A-F)
 *  <li><b>*</b> - match any number of characters, any characters
 * </ul>
 * @param expected expected pattern
 * @param actual actual test result string
 * @return Returns the result of the test, 1 for pass, 0 for failure.
 */
extern int	test_same(const char *expected, const char *actual);

/**
 * Check the result of a test by looking at the value of the <i>condition</i>
 * argument. If the <i>condition</i> is not zero the test passes.
 * @param condition condition to check
 * @return Returns the result of the test, 1 for pass, 0 for failure.
 */
extern int	test_true(bool condition);

/**
 * Check the result of a test by looking at the value of the <i>condition</i>
 * argument. If the <i>condition</i> is zero the test passes.
 * @param condition condition to check
 * @return Returns the result of the test, 1 for pass, 0 for failure.
 */
extern int	test_false(bool condition);

/**
 * Marks the test as failing. There can be multiple successes or passes in a
 * test and one failure will cause the whole test to fail.
 */
extern void	test_fail(void);

/**
 * Creates a string that is the contents of a file. Useful for loading in
 * results from a stream output. The result must be freed by the caller.
 * @param filename name of file to load
 * @return Returns the contents of the specified file as a string.
 */
extern char*	test_load_file(const char *filename);

/**
 * Force the generation of a test report. Generally called by test_done().
 * @param testName test name to find the results
 */
extern void	test_report_test(const char *testName);

/**
 * Resets the test to not-executed, erasing any pass or failed status of the test.
 * @param testName test name to rest
 */
extern void	test_reset_test(const char *testName);

/**
 * Prints out a hex dump of an array of bytes in hex and ascii format.
 *
 * @param data bytes to print
 * @param len number of bytes to print.
 */
extern void	test_hex_dump(const uint8_t *data, int len);

/**
 * Returns a string suitable for placing in code.
 *
 * @param data bytes to translate
 * @param len number of bytes to translate.
 */
extern char*	test_to_code_str(const uint8_t *data, int len);

/**
 * Output file for the test print function. It can be used to direct output to
 * the test results.
 */
extern FILE	*testOut;

/**
 * Flag indicating the test should run in verbose mode. This can also be set
 * on the command line with the -v option.
 */
extern int	testVerbose;

#endif /* __OFIX_TEST_H__ */