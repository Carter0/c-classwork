#include <cxxtest/TestSuite.h>
#include <iostream>
#include "../include/Map.h"


class MapTestSuite : public CxxTest::TestSuite {
public:
    void test_basic2() {
        Map m;
        RenderWindow window(VideoMode(1000, 600), "Desert");
        m.drawWinter(window);
        int size = m.getMapColliders().size();
        TS_ASSERT_EQUALS(size > 0, true);
    }
};
