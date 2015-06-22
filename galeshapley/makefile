# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = g++
CXXFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date
#
#main: main.o Node.o BST.o functions.o
#	$(CXX) $(CXXFLAGS) -o main main.o Node.o BST.o functions.o
#
main: main.o GaleShapley.o
	$(CXX) $(CXXFLAGS) -o main main.o GaleShapley.o

# The main.o target can be written more simply
#
#functions.o: functions.cpp Node.h BST.h
#	$(CXX) $(CXXFLAGS) -c functions.cpp

#main.o: main.cpp Node.h BST.h
main.o: main.cpp GaleShapley.h
	$(CXX) $(CXXFLAGS) -c main.cpp

#Node.o: Node.h
#
#BST.o: BST.h Node.h

GaleShapley.o: GaleShapley.h

clean:
	rm *.o main 
tar:
	tar -czvf sources.tar.gz *.c *.h makefile *.txt
