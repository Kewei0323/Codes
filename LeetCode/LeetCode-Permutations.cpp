/*
[LeetCode] Permutations

 

Given a collection of numbers, return all possible permutations.

For example,
[1,2,3] have the following permutations:
[1,2,3], [1,3,2], [2,1,3], [2,3,1], [3,1,2], and [3,2,1].
还有一种递归的写法，更简单一些，这里是每次交换num里面的两个数字，经过递归可以生成所有的排列情况，代码如下：
*/

class Solution {
public:
    vector<vector<int> > permute(vector<int> &num) {
        vector<vector<int> > res;
        permuteDFS(num, 0, res);
        return res;
    }
    void permuteDFS(vector<int> &num, int start, vector<vector<int> > &res) {
        if (start >= num.size()) res.push_back(num);
        for (int i = start; i < num.size(); ++i) {
            swap(num[start], num[i]);
            permuteDFS(num, start + 1, res);
            swap(num[start], num[i]);
        }
    }
};

