#include <cxxtest/TestSuite.h>
#include <iostream>
#include "../include/Player.h"


class PlayerTestSuite : public CxxTest::TestSuite {
public:
    void test_player() {
        Player p;
        TS_ASSERT_EQUALS(p.gravity, 2);
    }
    
    void test_player2() {
        Player p;
        TS_ASSERT_EQUALS(p.x, 0);
    }
    
    void test_player3() {
        Player p;
        TS_ASSERT_EQUALS(p.y, 0);
    }
};

