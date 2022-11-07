#pragma once



class Node {
public:

	int data;
	Node* left;
	Node* right;

	// Initializing values and pointers
	Node(int value) {
		data = value;
		left = nullptr;
		right = nullptr;
	}

	void insertIntoTree(int tall);
	
	//~Node();
};


void Node::insertIntoTree(int tall) {

	

	// very kul code. Does not not do duplicates :^)
	// Thank Mathis
	if (tall > this->data) {
		//return;
		// Insert node into position
		if (this->right == nullptr) {
			this->right = new Node(tall);
		}
		else {
			this->right->insertIntoTree(tall);
		}
	}
	else if (tall < this->data){
		//insertIntoTree(tall);
		if (this->left == nullptr) {
			this->left = new Node(tall);
			
		}
		else {
			this->left->insertIntoTree(tall);
		}
	}
	



}


//
// void BinaryTree::displayTree() {
//
// }
