#define DEBUG 1
#define COUT if(DEBUG)cout 

#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
#include <map>
#include <vector>

#include "GayleShepley.h"

using namespace std;

int main(int argc, char *args[]) {
	
	string ifile=args[1] , line;
	ifstream in;
	//istringstream bufStream;
	int n;
	
	if(argc!=3 ){
		cout<<"Usage: " <<args[0] <<" <input-file> <ouput-file>" <<endl;
		return 1;
	}
	
	in.open(ifile.c_str());
	if(in.fail()) {
		cout<<"Input File NOT found"<<endl; return 1;
	}
	
	getline(in, line);
	istringstream bufStream(line);	
	if (line!="") {
		bufStream >> n;
		COUT <<  n << endl;
	}	
	
	int **m, **f;
	m = new int * [n+1];
	f = new int * [n+1];
	for (int i=0; i <= n+1; i++){
		// to match m[1] to m[n] we choose n+1
		m[i] = new int[n+1];
		f[i] = new int[n+1];
	}
		
	for (int i=1 ; i <= n ; i++) {
		getline(in, line);
		istringstream bufStream(line);
		if (line!="")
			for (int j=1 ; j <= n; j++){
				int pref;
				bufStream >> pref;
				m[i][j]=pref;
				cout<< m[i][j] <<" ";
			}
		cout<<endl;
	}
	//dummy getline to wipe of the extra \n between two matrices
	getline(in, line);	
	
	for (int i=1 ; i <= n   ; i++) {
		getline(in, line);		
		istringstream bufStream(line);
		if (line!="")
			for (int j=1 ; j <= n; j++){
				int pref;
				bufStream >> pref;
				f[i][j]=pref;
				cout<< f[i][j] <<" ";
			}
		cout<<endl;
	}
	
	GayleShepley gs;
	gs.run(n,m,f);
	
	//finally
	in.close();
		
}
