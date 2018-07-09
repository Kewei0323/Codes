class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        stack<int> stack1;
        int n = 0;
        for(int i = 0; i < pushV.size(); i++){
            // 巧妙的循环
            while(stack1.empty() || stack1.top() != popV[i]){
                stack1.push(pushV[n++]);
                if(n > pushV.size()){
                    return false;
                }
            }
            stack1.pop();
        }
        return stack1.empty();
    }
};
