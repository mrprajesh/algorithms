# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = g++
CXXFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date
#
#
main: main.o GaleShapley.o
	$(CXX) $(CXXFLAGS) -o main main.o GaleShapley.o

# The main.o target can be written more simply
#

main.o: main.cpp GaleShapley.h
	$(CXX) $(CXXFLAGS) -c main.cpp

GaleShapley.o: GaleShapley.h

clean:
	rm *.o main 
tar:
	tar -czvf sources.tar.gz *.c *.h makefile *.txt
