#ifndef _ETTREE_H
#define _ETTREE_H

#include <iostream>
#include <list>
#include <map>

#include "Node.h"

#define DEBUG 1
#define COUT if(DEBUG)cout 


using namespace std;

class ETTree{
	private:
		
		map<int,int> fmap[20];
		
		int noOfNodes;
		list <Node> *adjList;
		vector <Node> node;
		static int WHITE, GREY, BLACK; 
		
		
	public:
		ETTree();
		ETTree(int);
		ETTree(int n, vector <Node> s,list <Node> adj[]);
		
		~ETTree();
		void run(); 
		void dfs(int); 
};

#endif
