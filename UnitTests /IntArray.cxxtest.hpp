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
            IntArray test1;
            IntArray test2;
            TS_ASSERT(test1 == test2);
        }

        void test_NotEquals() {
            IntArray test1;
            IntArray test2(90);
            TS_ASSERT(test1 != test2);
        }

        void test_CopyConstructor() {
            IntArray test1;
            IntArray test2(test1);
            TS_ASSERT(test1 == test2);
        }


        void test_ListConstructor() {
            auto testList = { 1, 2, 3};
            IntArray test1(testList);
            TS_ASSERT_EQUALS(3, test1.size());
        } 

        void test_MoveConstructor() {
            IntArray test(IntArray(sizeof(3)));
            TS_ASSERT_EQUALS(test.size(), 4);
        }

        void test_destructor() {
            IntArray * test1;
            test1 = new IntArray(sizeof(3));
            TS_ASSERT_EQUALS(4, test1->size());
            test1->~IntArray();
            TS_ASSERT(test1->size() != 3);
        }

        void test_ptr() {
            auto testList = {0, 1, 2, 3};
            IntArray test1(testList); 
            const int * temp = test1.ptr();
            TS_ASSERT_EQUALS(2, temp[2]);
        }


        void test_size() {
            IntArray test1;
            TS_ASSERT_EQUALS(test1.size(), 0);
        }

        void test_Assignment() {
            IntArray * test1;
            test1 = new IntArray(3);
            TS_ASSERT_EQUALS(3, test1->size());
            test1->~IntArray();
            TS_ASSERT(test1->size() != 2);
        }

        void test_Assignment2() {
            IntArray test1(3);
            IntArray test2 = std::move(test1);
            TS_ASSERT_EQUALS(test2.size(), 3);
        }

        void test_IndexGetter() {
            IntArray test1(2);
            test1[1] = 5;
            TS_ASSERT_EQUALS(test1[1], 5);
        }

        void test_ConstIndexGetter() {
            auto testList = {0, 1, 2, 3};
            IntArray test1(testList);
            const size_t index = 3;
            TS_ASSERT_EQUALS(test1[index], 3);  

        }

        void test_IndexOutOfBounds() {
            IntArray test1;
            TS_ASSERT_THROWS_ANYTHING(test1[5]);
        }

        void test_IndexOut2() {
            IntArray test1;
            const size_t index = 5;
            TS_ASSERT_THROWS_ANYTHING(test1[index]);

        } 

        void test_MoveDeletionStuff() {
            IntArray test1(5);
            test1[3] = 9;
            IntArray test2(std::move(test1));
            TS_ASSERT_EQUALS(test1.size(), 0);
        }


};

#endif
