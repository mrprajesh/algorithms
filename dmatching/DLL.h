#ifndef _DLL_H
#define _DLL_H

#include <iostream>
#include <list>
#include <map>

#include "Node.h"

#define DEBUG 1
#define COUT if(DEBUG)cout 


using namespace std;

class DLL{
	private:
		Node *head;
		int count;
			
	public:
		DLL();
		~DLL();
		bool insert (int);
		bool remove(int);
		int get_count();
		
};

#endif
