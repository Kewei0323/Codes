/*
[LeetCode] Minimum Depth of Binary Tree  

Given a binary tree, find its minimum depth.
The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.
*/


// 万能递归，但是最小深度的递归基和最大深度不同，更为复杂

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution{
public:
	int minDepth(TreeNode* root){
		if (root == NULL) return 0;
		if (root -> left == NULL && root -> right == NULL) return 1;

		if (root -> left == NULL) return minDepth(root -> right) + 1;
		else if (root -> right == NULL) return minDepth(root -> left) + 1;
		else return 1 + min(minDepth(root -> left), minDepth(root -> right));
	}
};

