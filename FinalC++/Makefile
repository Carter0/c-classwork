PROGRAMS= Q-strncat Q-entity

all: $(PROGRAMS)

$(PROGRAMS): %: %.cpp
	g++ -std=c++11 $< -o $@

clean:
	rm -f $(PROGRAMS)
