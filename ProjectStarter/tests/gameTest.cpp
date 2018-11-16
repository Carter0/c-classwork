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
#include "/home/carterweinberg/c++/c-classwork/ProjectStarter/tests/gameTest.h"

static GameTestSuite suite_GameTestSuite;

static CxxTest::List Tests_GameTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_GameTestSuite( "tests/gameTest.h", 5, "GameTestSuite", suite_GameTestSuite, Tests_GameTestSuite );

static class TestDescription_suite_GameTestSuite_test_init : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_GameTestSuite_test_init() : CxxTest::RealTestDescription( Tests_GameTestSuite, suiteDescription_GameTestSuite, 9, "test_init" ) {}
 void runTest() { suite_GameTestSuite.test_init(); }
} testDescription_suite_GameTestSuite_test_init;

