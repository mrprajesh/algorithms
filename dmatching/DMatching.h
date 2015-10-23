#ifndef _DMATCHING_H
#define _DMATCHING_H

#include <iostream>
#include <list>
#include <map>

#include "Node.h"

#define DEBUG 1
#define COUT if(DEBUG)cout 


using namespace std;

class DMatching{
	private:
		
		map<int,int> fmap[20];
		
		int noOfNodes;
		list <Node> *adjList;
		vector <Node> node;
		static int WHITE, GREY, BLACK; 
		
		
	public:
		DMatching();
		DMatching(int);
		DMatching(int n, vector <Node> s,list <Node> adj[]);
		
		~DMatching();
		void run(); 
		void dfs(int); 
};

#endif
