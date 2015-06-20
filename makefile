# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = g++
CXXFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date

main: main.o Node.o BST.o functions.o
	$(CXX) $(CXXFLAGS) -o main main.o Node.o BST.o functions.o

# The main.o target can be written more simply

functions.o: functions.cpp Node.h BST.h
	$(CXX) $(CXXFLAGS) -c functions.cpp

main.o: main.cpp Node.h BST.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Node.o: Node.h

BST.o: BST.h Node.h

clean:
	rm *.o main 1 2
tar:
	tar -czvf sources.tar.gz main.cpp functions.cpp BST.h BST.cpp Node.cpp Node.h makefile input1.txt input2.txt
