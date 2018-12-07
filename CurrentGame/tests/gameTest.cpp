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

bool suite_GameTestSuite_init = false;
#include "/Users/Carter/Desktop/c++/CurrentGame/tests/gameTest.h"

static GameTestSuite suite_GameTestSuite;

static CxxTest::List Tests_GameTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_GameTestSuite( "tests/gameTest.h", 6, "GameTestSuite", suite_GameTestSuite, Tests_GameTestSuite );

static class TestDescription_suite_GameTestSuite_test_basic : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_GameTestSuite_test_basic() : CxxTest::RealTestDescription( Tests_GameTestSuite, suiteDescription_GameTestSuite, 10, "test_basic" ) {}
 void runTest() { suite_GameTestSuite.test_basic(); }
} testDescription_suite_GameTestSuite_test_basic;

static class TestDescription_suite_GameTestSuite_test3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_GameTestSuite_test3() : CxxTest::RealTestDescription( Tests_GameTestSuite, suiteDescription_GameTestSuite, 18, "test3" ) {}
 void runTest() { suite_GameTestSuite.test3(); }
} testDescription_suite_GameTestSuite_test3;

