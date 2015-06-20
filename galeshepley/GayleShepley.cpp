#include "GayleShepley.h"

GayleShepley::GayleShepley(){
	
}

GayleShepley::~GayleShepley() {
	

}

void GayleShepley::run(int n, int **m, int **f) {
	for (int i=1 ; i <= n   ; i++) {
		for (int j=1 ; j <= n; j++){
			cout<< m[i][j] <<" ";
		}
		cout<<endl;
	}
}
	
	
	

