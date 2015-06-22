#ifndef _GAYLESHEPLEY_H
#define _GAYLESHEPLEY_H

#include <iostream>
#include <list>
#include <map>

#define DEBUG 0
#define COUT if(DEBUG)cout 


using namespace std;

class GayleShepley{
	private:
		bool computed;
		bool *isWomanEng;
		bool *isManEng;
		int *nextUnPropOf;  // first unproposed woman on the man's preference list
		list<int> unPropMan;
		int *matchedWoman;
		int *matchedMan;

		int **mlist, **flist, num;
		map<int,int> fmap[20];

		 
	public:
		GayleShepley();
		GayleShepley(int);
		
		~GayleShepley();
		
		int* run(int  , int **, int **);
		bool isProposerBetter(int, int, int );
		
		void check();
		void print();
		
};

#endif
