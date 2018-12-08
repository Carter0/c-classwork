PROGRAMS= Q-strncat Q-entity Q-color Q-chararray

all: $(PROGRAMS)

$(PROGRAMS): %: %.cpp
	g++ -std=c++11 $< -o $@

clean:
	rm -f $(PROGRAMS)
