#include "ETTree.h"

ETTree::ETTree(){
	
}

ETTree::~ETTree() {
	

}

ETTree::ETTree(int n, vector <Node> s,list <Node> adj[]){
	this->noOfNodes=n;
	this->node=s;
	this->adjList=adj;
	
}

int ETTree::WHITE=0; 
int ETTree::GREY=1; 
int ETTree::BLACK=2;
int t=0;
void ETTree::dfs(int u) {


}
void ETTree::run() {
	
	int n = node.size();
  
    
    for(int i=1; i <= n ; i ++){
		if(node.at(i).getColor()==WHITE){
			dfs(i);
		}
	}
}	
