#include "Node.h"
	Node::~Node(){
		this->id=-1;
		
	}
	Node::Node(){
		this->id=-1;
		
	}
	 Node::Node(  int d){
		this->id=d;
		
	}

	
	
	int  Node::getId(){
		return id;
	}

	Node* Node::getLeft(){
		return left;
	}
	void Node::setLeft(Node* n){
		this->left=n;
	}
	void Node::setRight(Node* n){
		this->right=n;
	}

	Node* Node::getRight(){
		 return right;
	}
