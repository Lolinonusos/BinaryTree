#include <iostream>

#include "BinaryTree.h"


bool isFullBinaryTree(Node* root) {

	// Checks if the current node is empty (or a leaf)
	if (root == nullptr) {
		return true;
	}
	
	// 
	if (root->left == nullptr && root->right == nullptr) {
		return true;
	}

	// 
	if ((root->left) && (root->right)) {

	}
	return false;
}


// fixed array
const int fixedArray[] = { 10,20,8,15,12,17,25 };

int main() {

	int loopSize = sizeof(fixedArray) / sizeof(fixedArray[0]);

	BinaryTree* Gongaga = new BinaryTree;

	for (int i = 0; i < loopSize; i++) {
		Gongaga->createNode(fixedArray[i]);
	}

	std::cout << Gongaga->root->data;


	return 0;
}