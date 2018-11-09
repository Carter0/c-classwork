#ifndef INT_ARRAY_ALGORITHMS_CXXTEST_H
#define INT_ARRAY_ALGORITHMS_CXXTEST_H

#include <cxxtest/TestSuite.h>
#include <iostream>
#include "IntArrayAlgorithms.hpp"

class IntArrayAlgorithmsTestSuite : public CxxTest::TestSuite
{
    public:

        void test_REMOVEME() {}


        void test_swap() {
            IntArray temp1 = {2, 2, 2, 2};
            IntArray temp2 = {3, 3, 3, 3};
            IntArrayAlgorithms test;
            test.swap(temp1, temp2);
            for(int i = 0; i < temp1.size(); i++) {
                TS_ASSERT_EQUALS(temp1[i], 3);
                TS_ASSERT_EQUALS(temp2[i], 2);
            }
        }

        void test_sum() {
            IntArrayAlgorithms test;
            IntArray temp1 = {1, 2, 3};
            TS_ASSERT_EQUALS(test.sum(temp1), 6);
        }

        void test_sum2() {
            IntArrayAlgorithms test;
            IntArray temp1;
            TS_ASSERT_EQUALS(test.sum(temp1), 0);
        }

        void test_product() {
            IntArrayAlgorithms test;
            IntArray temp1;
            TS_ASSERT_EQUALS(test.product(temp1), 0);
        }

        void test_product2() {
            IntArrayAlgorithms test;
            IntArray temp1 = {3, 1, 2 ,3};
            TS_ASSERT_EQUALS(test.product(temp1), 18);
        }


        void test_sort() {
            IntArrayAlgorithms test;
            IntArray temp1 = {2, 3, 0, 1};
            test.sort(temp1);
            for(int i = 0; i < temp1.size(); i++) {
                TS_ASSERT_EQUALS(temp1[i], i);
            }
        }
        void test_contains() {
            IntArrayAlgorithms test;
            IntArray temp1 = {1, 2, 3};
            TS_ASSERT_EQUALS(test.contains(temp1, 1), 1);
            TS_ASSERT_EQUALS(test.contains(temp1, 9), 0);
            
        }

};

#endif
