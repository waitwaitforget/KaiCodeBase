# VERSION 1
#test: learn_makefile.cc helper.h
#	g++ -o test learn_makefile.cc

# VERSION 2
CXX = g++
TARGET = test
SRC = $(wildcard *.cc)
OBJ = $(patsubst %.cc, %.o, $(SRC))

CXXFLAGS = -c -Wall

$(TARGET): $(OBJ)
	$(CXX) -o $@ $^

%.o: %.cc
	$(CXX) $(CXXFLAGS) $< -o $@

.PHONY: clean
clean:
	rm -f *.o $(TARGET)
