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
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        bool result = false;
        if(pRoot1 != NULL && pRoot2 != NULL){
            if(pRoot1 -> val == pRoot2 -> val){
                result = DoesTree1HaveTree2(pRoot1, pRoot2);
            }
            if(!result){
                result = HasSubtree(pRoot1 -> left, pRoot2);
            }
            if(!result){
                result = HasSubtree(pRoot1 -> right, pRoot2);
            }
        }
        return result;
    }
    
private:
    bool DoesTree1HaveTree2(TreeNode* pRoot1, TreeNode* pRoot2){
        // pRoot2 必须先进行非空判断，否则两者都是到达最后一位为空时，先判断pRoot1的话就会给出false, 而实际结果是true
        if(pRoot2 == NULL){
            return true;
        }
        if(pRoot1 == NULL){
            return false;
        }
        if(pRoot1 -> val != pRoot2 -> val){
            return false;
        }
        return DoesTree1HaveTree2(pRoot1 -> left, pRoot2 -> left) && DoesTree1HaveTree2(pRoot1 -> right, pRoot2 -> right);
    }
};
