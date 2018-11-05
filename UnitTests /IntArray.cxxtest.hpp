#ifndef INT_ARRAY_CXXTEST_H
#define INT_ARRAY_CXXTEST_H

#include <cxxtest/TestSuite.h>
#include <iostream>
#include "IntArrayAlgorithms.hpp"

class IntArrayTestSuite : public CxxTest::TestSuite
{
    public:

        // TODO
        void test_REMOVEME() {}

        void test_DoubleEquals() {
            IntArray test1 = new IntArray(5);
            IntArray test2 = new IntArray(5);
        }
};

#endif
