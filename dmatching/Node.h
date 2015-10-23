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
	
	int  getId();
	Node* getLeft();
	void setRight(Node* )	;
	Node* getRight();
	void setLeft(Node* )	;
	
	private:
		Node *left;
		Node *right;
				
		int id;
};
#endif

