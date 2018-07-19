/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        if(pRootOfTree == NULL){
            return NULL;
        }
        if(pRootOfTree -> left == NULL && pRootOfTree -> right == NULL){
            return pRootOfTree;
        }
        // left treenode -> doubly listnode
        TreeNode *left = Convert(pRootOfTree -> left);
        TreeNode *p = left;
        // last node of left listnode
        while(p != NULL && p -> right != NULL){
            p = p -> right;
        }
        // link the left listnode and pRootOfTree
        if(left != NULL){
            p -> right = pRootOfTree;
            pRootOfTree -> left = p;
        }
        //right treenode -> doubly listnode
        TreeNode *right = Convert(pRootOfTree -> right);
        if(right != NULL){
            right -> left = pRootOfTree;
            pRootOfTree -> right = right;
        }
        return left != NULL ? left:pRootOfTree;
    }
};
