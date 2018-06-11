/*
[LeetCode] Maximum Depth of Binary Tree  

Given a binary tree, find its maximum depth.
The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
*/

//深度优先搜索（DFS）
class Solution{
public:
	int maxDepth(TreeNode* root){
		if (!root) return 0;
		return 1 + max(maxDepth(root -> left), maxDepth(root -> right));
	}
};


//广度优先搜索（BFS） 也可以称作二叉树层次遍历
class Solution{
public:
	int maxDepth(TreeNode* root){
		if (!root) return 0;
		int res = 0;
		queue<TreeNode*> q;
		q.push(root);
		while (!q.empty()){
			++res;
			int n = q.size();
			for (int i = 0; i < n; ++i){
				TreeNode *t = q.front(); q.pop;
				if (root -> left) q.push(t -> left);
				if (root -> right) q.push(t -> right);
			}
		}
	}
};

