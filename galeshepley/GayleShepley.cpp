#include "GayleShepley.h"

GayleShepley::GayleShepley(){
	
}

GayleShepley::~GayleShepley() {
	

}

GayleShepley::GayleShepley(int n){
	num = n;
	nextUnPropOf = new int[n];
	
	matchedWoman = new int[n];
	matchedMan = new int[n];
	
	isWomanEng = new bool[n];
	isManEng = new bool[n];
	
//	fmap = map<int,int>[n];
	
	for (int i=1; i <= n ; i++) {
		nextUnPropOf[i]=1;
		unPropMan.push_back(i);
		
	}
	
}

void GayleShepley::run(int n, int **m, int **f) {
	mlist = m;
	flist = f;
	
	for (int i=1 ; i <= n   ; i++) {
		
		for (int j=1 ; j <= n; j++){
			//cout<< f[i][j] <<" ";
			int t = f[i][j];
			fmap[i][t] = j;
		}
		//cout<<endl;
	}
	
	while(!unPropMan.empty()){
		int man = unPropMan.front();
		int windex = nextUnPropOf[man]++;
		int woman = m[man][windex];
		if(!isWomanEng[woman]){
			
			isWomanEng[woman]=true;
			
			matchedWoman[man]=woman;
			matchedMan[woman]=man;
			
			unPropMan.remove(man);
		}
		else {
			if ( isProposerBetter(woman,man,matchedMan[woman] )){
				matchedWoman[man]=woman;
				matchedMan[woman]=man;				
				unPropMan.push_back(matchedMan[woman]);
			}
			else{
			
			}
		}
	}
	 
}

	
void GayleShepley::print() {
	
	for (int j=1 ; j <= num; j++){
		cout<< j <<" " << matchedWoman[j] << endl;
	}
}	
bool GayleShepley::isProposerBetter(int woman, int prop, int eng) {
	bool yes= false;
	if(fmap[woman].find(prop)->second < fmap[woman].find(eng)->second) {
		yes = true;
	}
	return yes;
}
