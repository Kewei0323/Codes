/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/

class Solution{
public:
    vector<vector<int> > Print(TreeNode* pRoot){
        vector<vector<int> > res;
        if(pRoot == NULL) return res;

        queue<TreeNode*> que;
        que.push(pRoot);

        while(!que.empty()){
            int flag = 0, length = que.size();
            vector<int> vec;
            while(flag++ < length){
                TreeNode* tmp = que.front();
                que.pop();
                vec.push_back(tmp -> val);
                if(tmp -> left) que.push(tmp -> left);
                if(tmp -> right) que.push(tmp ->right);
            }
            res.push_back(vec);
        }
        return res;
    }
};
