# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = g++
CXXFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date
#
#
main: main.o DMatching.o DLL.o Node.o
	$(CXX) $(CXXFLAGS) -o main main.o DMatching.o DLL.o Node.o

# The main.o target can be written more simply
#

main.o: main.cpp DMatching.h Node.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Node.o: Node.h

DMatching.o: DMatching.h DLL.h Node.h

DLL.o: DLL.h Node.h

clean:
	rm *.o main 
tar:
	tar -czvf sources.tar.gz *.c *.h makefile *.txt
