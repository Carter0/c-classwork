/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

bool suite_platformTestSuite_init = false;
#include "/Users/Carter/Desktop/c++/CurrentGame/tests/platformTest.h"

static platformTestSuite suite_platformTestSuite;

static CxxTest::List Tests_platformTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_platformTestSuite( "tests/platformTest.h", 6, "platformTestSuite", suite_platformTestSuite, Tests_platformTestSuite );

static class TestDescription_suite_platformTestSuite_test_platforms : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_platformTestSuite_test_platforms() : CxxTest::RealTestDescription( Tests_platformTestSuite, suiteDescription_platformTestSuite, 8, "test_platforms" ) {}
 void runTest() { suite_platformTestSuite.test_platforms(); }
} testDescription_suite_platformTestSuite_test_platforms;

