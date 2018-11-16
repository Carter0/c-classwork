#include <cxxtest/TestSuite.h>
#include <iostream>
#include "../src/Game.h"

class GameTestSuite : public CxxTest::TestSuite {
    public:
       
        //test function to see if the init method in game works properly 
        void test_init() {
            Game *game = new Game(); 
            game->init("testing", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 900, 500, false);
            TS_ASSERT_EQUALS(game->getWidth(), 900);
            TS_ASSERT_EQUALS(game->getHeight(), 500);

            game->clean();
        }

};
