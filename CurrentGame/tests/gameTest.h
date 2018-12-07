#include <cxxtest/TestSuite.h>
#include <iostream>
#include "../include/GameLogic.h"
#include "../include/Map.h"

class GameTestSuite : public CxxTest::TestSuite {
    public:
       
        //test function for gamelogic
        void test_basic() {
            GameLogic testing;
            bool example = testing.withInBounds(3, 4);
            TS_ASSERT_EQUALS(example, true);
        }
    

    
    void test3() {
        GameLogic logic;
        TS_ASSERT_EQUALS(logic.timePassed > 0, true);
    }

};
