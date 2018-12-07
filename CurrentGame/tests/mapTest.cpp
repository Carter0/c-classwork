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

bool suite_MapTestSuite_init = false;
#include "/Users/Carter/Desktop/c++/CurrentGame/tests/mapTest.h"

static MapTestSuite suite_MapTestSuite;

static CxxTest::List Tests_MapTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MapTestSuite( "tests/mapTest.h", 6, "MapTestSuite", suite_MapTestSuite, Tests_MapTestSuite );

static class TestDescription_suite_MapTestSuite_test_basic2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MapTestSuite_test_basic2() : CxxTest::RealTestDescription( Tests_MapTestSuite, suiteDescription_MapTestSuite, 8, "test_basic2" ) {}
 void runTest() { suite_MapTestSuite.test_basic2(); }
} testDescription_suite_MapTestSuite_test_basic2;

