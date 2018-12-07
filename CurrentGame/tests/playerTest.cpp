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

bool suite_PlayerTestSuite_init = false;
#include "/Users/Carter/Desktop/c++/CurrentGame/tests/playerTest.h"

static PlayerTestSuite suite_PlayerTestSuite;

static CxxTest::List Tests_PlayerTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_PlayerTestSuite( "tests/playerTest.h", 6, "PlayerTestSuite", suite_PlayerTestSuite, Tests_PlayerTestSuite );

static class TestDescription_suite_PlayerTestSuite_test_player : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_PlayerTestSuite_test_player() : CxxTest::RealTestDescription( Tests_PlayerTestSuite, suiteDescription_PlayerTestSuite, 8, "test_player" ) {}
 void runTest() { suite_PlayerTestSuite.test_player(); }
} testDescription_suite_PlayerTestSuite_test_player;

static class TestDescription_suite_PlayerTestSuite_test_player2 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_PlayerTestSuite_test_player2() : CxxTest::RealTestDescription( Tests_PlayerTestSuite, suiteDescription_PlayerTestSuite, 13, "test_player2" ) {}
 void runTest() { suite_PlayerTestSuite.test_player2(); }
} testDescription_suite_PlayerTestSuite_test_player2;

static class TestDescription_suite_PlayerTestSuite_test_player3 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_PlayerTestSuite_test_player3() : CxxTest::RealTestDescription( Tests_PlayerTestSuite, suiteDescription_PlayerTestSuite, 18, "test_player3" ) {}
 void runTest() { suite_PlayerTestSuite.test_player3(); }
} testDescription_suite_PlayerTestSuite_test_player3;

