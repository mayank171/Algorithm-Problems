#include <iostream>
#include <cmath>

using namespace std;

class TreeNode {
	public:
		int data;
		TreeNode* left;
		TreeNode* right;
		TreeNode(int d) {
			data = d;
			left = NULL;
			right = NULL;
		}
};

TreeNode* insertInBST(TreeNode* root, int x) {
	if (root == NULL) {
		TreeNode* tmp = new TreeNode(x);
	return tmp;
}

if (x < root->data) {
	root->left = insertInBST(root->left , x);
		return root;
	} else {
		root->right = insertInBST(root->right, x);
		return root;
	}
}

TreeNode* createBST() {
	TreeNode* root = NULL;
	int x;
	cin >> x;

	//Take input until user inputs -1
	while (true) {
		if (x == -1) break;
		root = insertInBST(root, x);
		cin >> x;
	}
	return root;
}

//Calculate height of tree with given root
int height(TreeNode* root) {
	if (root == NULL) return 0;

	int leftHt = height(root->left);
	int rightHt = height(root->right);
	int curHt = max(leftHt, rightHt) + 1;
	return curHt;
}

//Check whether tree is balanced or not
bool isHeightBalanced(TreeNode* root) {
	if (!root) {
		return true;
	}

	int leftHt = height(root->left);
	int rightHt = height(root->right);

	if (abs(leftHt - rightHt) > 1) 
			return false;
	return isHeightBalanced(root->left) && isHeightBalanced(root->right);
}

int main() {
	//Input BST
	cout<<"Input Tree elements : ";
	TreeNode* root = createBST();

	cout << "Given BST is Balanced : ";
	if (isHeightBalanced(root)) {
		cout << "True";
	}
	else {
		cout << "False";
	}

	return 0;
}

