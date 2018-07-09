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
    void Mirror(TreeNode *pRoot) {
        if((!pRoot) || (pRoot -> left == NULL && pRoot -> right == NULL)){
            return;
        }
        // 交换左右子树
        TreeNode *pTmp = pRoot -> left;
        pRoot -> left = pRoot -> right;
        pRoot -> right = pTmp;
        // 非空结点循环求解
        if(pRoot -> left != NULL){
            Mirror(pRoot -> left);
        }
        if(pRoot -> right != NULL){
            Mirror(pRoot -> right);
        }
    }
};
