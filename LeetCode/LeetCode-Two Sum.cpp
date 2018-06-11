/*
[LeetCode] Two Sum  

Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution.

Example:
Given nums = [2, 7, 11, 15], target = 9,
Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/


//本程序可以将所有的符合条件的下标都找到，不过题目原本程序好像也只是找到一个即可！
class Solution{
public:
	vector<int> twoSum(vector<int>& nums, int target){
		unordered_map<int, int> m;
		vector<int> res;
		for (int i = 0; i < nums.size(); ++i) m[nums[i]] = i;
		for (int j = 0; j < nums.size(); ++j){
			int tmp = target - nums[i];
			if (m.count(t) && m[t] != i){
				res.push_back(i);
				res.push_back(m[t]);
				m[t] = m.erase(m[t]);
                nums[i] = m.erase(nums[i]);
			}
		}
		return res;
	}
};


// 博主Grandyang 似乎有些理解错误题目，下面的程序加了break, 如果有多组合乎条件，则结果会出现问题
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> res;
        for (int i = 0; i < nums.size(); ++i) {
            m[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); ++i) {
            int t = target - nums[i];
            if (m.count(t) && m[t] != i) {
                res.push_back(i);
                res.push_back(m[t]);
                break;
            }
        }
        return res;
    }
};



// 哈希表删除数据 m.earse 用法参考

#include <unordered_map>
#include <iostream>
int main()
{
    std::unordered_map<int, std::string> c = {{1, "one"}, {2, "two"}, {3, "three"},
                                    {4, "four"}, {5, "five"}, {6, "six"}};
    // erase all odd numbers from c
    for(auto it = c.begin(); it != c.end(); )
        if(it->first % 2 == 1)
            it = c.erase(it);
        else
            ++it;
    for(auto& p : c)
        std::cout << p.second << ' ';
}

//Possible output:  two four six


