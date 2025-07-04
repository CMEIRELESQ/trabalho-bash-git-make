CXX = g++
CXXFLAGS = -Wall -Wextra -Iinclude
SRC = src

all: primo vetor matriz

primo: $(SRC)/primo.cpp
	$(CXX) $(CXXFLAGS) -o primo $(SRC)/primo.cpp

vetor: $(SRC)/vetor.cpp
	$(CXX) $(CXXFLAGS) -o vetor $(SRC)/vetor.cpp

matriz: $(SRC)/matriz.cpp
	$(CXX) $(CXXFLAGS) -o matriz $(SRC)/matriz.cpp

clean:
	rm -f primo vetor matriz
