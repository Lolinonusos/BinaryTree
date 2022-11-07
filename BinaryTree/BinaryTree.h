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


	~Node();
};



class BinaryTree {
public:

	Node* root;

	BinaryTree() {
		root = nullptr;
	}
	
	void createNode(int);

	void insertIntoTree(Node* node, Node* rootNode);

	void displayTree();
};



void BinaryTree::createNode(int value) {

	Node* newNode = new Node(value);

	newNode->left = nullptr;
	newNode->right = nullptr;

	if (root == nullptr) {
		root = newNode;
		//return;
	}

	insertIntoTree(newNode, root);
}



void BinaryTree::insertIntoTree(Node* newNode, Node* rootNode) {

	Node* tempRoot = rootNode;

	// Insert node into position
	if (tempRoot == nullptr) {
		newNode = tempRoot;
		return;
	}

	// No duplicates
	if (newNode->data == tempRoot->data) {
		// quit
		// Delete node, free memory
		return;
	}

	// 
	if (newNode->data < tempRoot->data) {
		insertIntoTree(tempRoot->left);
		return;
	}
	else {
		insertIntoTree(tempRoot->right);
		return;
	}
}



void BinaryTree::displayTree() {

}
