/*
[LeetCode] Single Number 

Given an array of integers, every element appears twice except for one. Find that single one.
Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
*/

// 利用逻辑异或进行 bit operation

class Solution{
public:
	int singleNumber(vector<int>& nums){
		int res = 0;
		for (auto num: nums) res ^= num;
		return res;
	}
};

