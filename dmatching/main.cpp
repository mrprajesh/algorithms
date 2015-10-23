
#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
#include <map>
#include <vector>


#include "DMatching.h"
using namespace std;

int main(int argc, char *args[]) {
	ofstream out;
	string ofile,dfile,gname;
	ofile=args[2];
	if(argc!=3 ){
		cout << "Usage error"<<endl;
		return 1;
	}
	
	bool inode=false,iedge=false;
	int i=0,n=0;int c;
	string ifile=args[1],line;
	
	ifstream in;
	vector <Node> vnodes;
	Node tmp(-1);vnodes.push_back(tmp);
	in.open(ifile.c_str());
	if(in.fail()) {COUT<<"Input File NOT found"<<endl; return 1;}	
	c=0;
	while (getline(in, line)) {
		c++;
		if(line=="//edges"){
			break;
		}	
	}
	in.close();c=c-2;
	
	in.open(ifile.c_str());
	
	std::map<string,int> mymap;
	std::map<string,int>::iterator it;
//	 int adj[c][c];
	list <Node> al[c+1];
	map<string,int>::iterator it1,it2;
	in>> line>> gname;
//	adj = new int* [c+1];
//	for (i = 1; i <= c+1; ++i) {
//		adj[i] = new int[c+1];
//	}
	while (getline(in, line)) {
		istringstream bufStream(line);
		string key="";
		bufStream >> key ;
		
		if(inode && key!="//edges"){
			string s=key.substr(0,key.length()-1);
			mymap[s]=++i;
			COUT<<s<< " "<< i <<endl;
			Node tmp(i);
			vnodes.push_back(tmp);
			//al[i].push_back(tmp);
		}
		n=i;
		
		if(iedge && key!="}"){
			string node1,node2,len,tmp;
			node1=key;
			
			bufStream >> tmp>>node2 >> len ;
			len=len.substr(len.find("\"")+1);
			len=len.substr(0,len.length()-3);
			COUT<< node1 <<" " <<node2<< " "<< len<<endl;
			it1 = mymap.find(node1);
			it2 = mymap.find(node2);
			if (it1 != mymap.end() && it2 != mymap.end()){
				//int dis=atoi(len.c_str());
//				COUT<<"["<<it1->second<<"]["<<it2->second <<"]=" << dis<<endl;
//				adj[it1->second][it2->second]=dis;
//				adj[it2->second][it1->second]=dis;	
				//vnodes.at(it1->second).setDistance(dis);
				//vnodes.at(it2->second).setDistance(dis);
//				COUT<< "="<<vnodes.at(it1->second).getDistance()<<endl;
				al[it2->second].push_back(vnodes.at(it1->second));
				al[it1->second].push_back(vnodes.at(it2->second));
			}
		}
		if(key=="//nodes") 
			inode =true;
		else if(key=="//edges") {
			iedge= true; inode=false;
//			for(int j=1;j<=n;j++)
//				for(int k=1;k<=n;k++)
//					adj[j][k]=0;
		}else if(key=="}"){
				iedge=inode=false;
		}
	}
	in.close();
	
	DMatching g(n,vnodes,al);
	//g.run();
	return 0;
	
}
