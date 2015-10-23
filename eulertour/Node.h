#ifndef _NODE_H
#define _NODE_H
using namespace std;
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <list>
#include <climits>
#include <vector>

class Node{
	public:
	~Node();
	Node();
	Node(int);
	
	void  setFtime(int a);
	void  setDtime(int a);
	
	int  getFtime();
	int  getDtime();
	
	
	void  setColor(int a);
	
	int  getColor();	
	int  getId();
		
	private:
		
		
		int id;
		int color;
		
		int dtime;
		int ftime;
		list <Node> adj;
};
#endif

