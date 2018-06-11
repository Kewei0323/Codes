/*
[LeetCode] Symmetric Tree  

Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).
For example, this binary tree is symmetric:

    1
   / \
  2   2
 / \ / \
3  4 4  3 

But the following is not:

    1
   / \
  2   2
   \   \
   3    3 

Note:
Bonus points if you could solve it both recursively and iteratively.
*/


// 1. Recursive Solution

class Solution{
public:
	bool isSymmetric(TreeNode* root){
		if(!root) return true;
		return isSymmetric(root -> left, root -> right);
	}
	bool isSymmetric(TreeNode* left, TreeNode* right){
		if(!left && !right) return true;
		if(left && !right || !left && right || left -> val != right -> val) return false;
		return isSymmetric(left -> left, right -> right) && isSymmetric(left -> right, right -> left);
	}
};


// 2. Iterative Solution

class Solution{
public:
	bool isSymmetric(TreeNode* root){
		if(!root) return true;
		queue<TreeNode*> q1, q2;
		q1.push(root -> left);
		q2.push(root -> right);

		while(!q1.empty() && !q2.empty()){
			TreeNode *node1 = q1.front();
			TreeNode *node2 = q2.front();
			q1.pop();
			q2.pop();
			if(node1 && !node2 || !node1 && node2) return false;
			if(node1){
				if(node1 -> val != node2 -> val) return false;
				q1.push(node1 -> left);
				q1.push(node1 -> right);
				q2.push(node2 -> right);
				q2.push(node2 -> left);
			}
		}
		return true;
	}
};

