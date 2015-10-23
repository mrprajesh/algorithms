
#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

int main(){
	ofstream myfile;
	int i=0,n;
	
	srand (time(NULL));
	
	if(myfile.is_open()){
		cout<< "opened somewhere!" << endl;
		return 1;
	} 
	
	for( i=0; i< 100; i++){
		stringstream ss;
		ss << i;
		string filename = ss.str() + ".txt";
		//cout<< filename << endl;
		n = rand() %100 +1;
		//n =10;
		
		vector<int> vec(n);
		for(int j =0 ; j< n; j++){
			vec.at(j)=j+1;
		}
		
		//cout<< myvec.size() << "-size" <<endl;
		myfile.open(filename.c_str());	
		//cout<< n-1<< endl;
		myfile<<--n<< "\n";
		int m=n;
		//myfile<< " write to the file something"<< endl;		
		for(int k=0; k< m; k++){
			
			vector <int > myvec;
			myvec = vec;
			for(int j=myvec.size()-1; j>0; j--){
	//			std::cout << "myvector contains:";
	//			for (unsigned i=0; i<myvec.size(); ++i)
	//			std::cout << ' ' << myvec[i];
	//			std::cout << '\n';

				unsigned del = rand() % j ;
				//cout<< j << "= del -"<<  del<<endl;
				//if(myvec.size()!=del-1)
				myfile<< myvec.at(del) << " ";
				myvec.erase(myvec.begin() + del);
			
			}
			//myfile<< myvec.at(0) << " ";
			myfile<<"\n";
		}
		
			myfile<<"\n";
			
		for(int k=0; k<m ; k++){
			
			vector <int > myvec;
			myvec = vec;
			for(int j=myvec.size()-1; j>0; j--){
	//			std::cout << "myvector contains:";
	//			for (unsigned i=0; i<myvec.size(); ++i)
	//			std::cout << ' ' << myvec[i];
	//			std::cout << '\n';

				unsigned del = rand() % j ;
				//cout<< j << "= del -"<<  del<<endl;
				//if(myvec.size()!=del-1)
				myfile<< myvec.at(del) << " ";
				myvec.erase(myvec.begin() + del);
			
			}
			//myfile<< myvec.at(0) << " ";
			myfile<<"\n";
		}
		myfile.close();
	
	}	
	return 0;
}
