#ifndef _GAYLESHEPLEY_H
#define _GAYLESHEPLEY_H

#include <iostream>
using namespace std;

class GayleShepley{
	private:
		bool computed;
		
		 
	public:
		GayleShepley();
		
		~GayleShepley();
		
		void run(int n , int **m, int **f);
		
		//static int index;
	
		
};

#endif
