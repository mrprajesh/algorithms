#include "Node.h"
	Node::~Node(){
		this->id=-1;
		this->color=-1;
		
	}
	Node::Node(){
		this->id=-1;
		this->color=-1; 
	}
	 Node::Node(  int d){
		this->id=d;
		this->color=0; 
	}

	void  Node::setFtime(int a){
		this->ftime=a;
	}
	
	void  Node::setDtime(int a){
		this->dtime=a;
	}
	void  Node::setColor(int a){
		this->color=a;
	}
	
	int  Node::getColor(){
		return color;
	}   
	int  Node::getFtime(){
		return ftime;
	}

	int  Node::getDtime(){
		return dtime;
	}
	
	int  Node::getId(){
		return id;
	}

