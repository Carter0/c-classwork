#include <cxxtest/TestSuite.h>
#include <iostream>
#include "../include/Platforms.h"


class platformTestSuite : public CxxTest::TestSuite {
public:
    void test_platforms() {
        Platforms p;
        TS_ASSERT_EQUALS(p.dir, 1);
    }
};
