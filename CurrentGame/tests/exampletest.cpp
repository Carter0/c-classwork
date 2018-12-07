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

bool suite_ExampleSuite_init = false;
#include "/Users/Carter/Desktop/c++/CurrentGame/tests/exampletest.h"

static ExampleSuite suite_ExampleSuite;

static CxxTest::List Tests_ExampleSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ExampleSuite( "tests/exampletest.h", 3, "ExampleSuite", suite_ExampleSuite, Tests_ExampleSuite );

static class TestDescription_suite_ExampleSuite_testExample : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ExampleSuite_testExample() : CxxTest::RealTestDescription( Tests_ExampleSuite, suiteDescription_ExampleSuite, 6, "testExample" ) {}
 void runTest() { suite_ExampleSuite.testExample(); }
} testDescription_suite_ExampleSuite_testExample;

