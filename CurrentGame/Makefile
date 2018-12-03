# project source and header files
SOURCES=main.cpp Player.cpp Map.cpp Platforms.cpp Gamelogic.cpp
HEADERS= Platforms.h Player.h Map.h targetver.h Gamelogic.h

# test header files
#TESTS=tests/exampletest.h tests/gameTest.h

# C++ compile and linker flags
CPPFLAGS=-O0 `sdl2-config --cflags`
LDFLAGS=`sdl2-config --libs` -lSDL2_image -lSDL2_mixer -lSDL2_ttf 

#note, maybe bring back for linux
#-lGL

# location of cxxtest
CXXTEST_HOME = cxxtest-4.4
CXXTEST_GEN = $(CXXTEST_HOME)/bin/cxxtestgen
CXXTEST_INCLUDE = $(CXXTEST_HOME)

# additional lists
MAIN_OBJECTS=$(SOURCES:.cpp=.o)
TEST_OBJECTS=$(TESTS:.h=.o)
TEST_SOURCES=$(TESTS:.h=.cpp)

# rules
all: main test

main: $(MAIN_OBJECTS)
	g++ -std=c++11 $(LDFLAGS) $^ -o $@

test: tests/test.o $(TEST_OBJECTS) $(filter-out src/main.o,$(MAIN_OBJECTS))
	g++ -std=c++11 $(LDFLAGS) $^ -o $@

$(MAIN_OBJECTS): %.o: %.cpp $(HEADERS) Makefile
	g++ -std=c++11 $(CPPFLAGS) -c $< -o $@

$(TEST_OBJECTS) tests/test.o: %.o: %.cpp $(HEADERS) Makefile
	g++ -std=c++11 $(CPPFLAGS) -I$(CXXTEST_INCLUDE) -c $< -o $@

tests/test.cpp:
	$(CXXTEST_GEN) --root --error-printer -o $@

$(TEST_SOURCES): %.cpp: %.h
	$(CXXTEST_GEN) --part --error-printer $< -o $@

clean:
	rm -f main test tests/test.cpp $(MAIN_OBJECTS) $(TEST_OBJECTS) tests/test.o $(TEST_SOURCES) *~
