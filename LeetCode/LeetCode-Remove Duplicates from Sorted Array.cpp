/*
[LeetCode] Remove Duplicates from Sorted Array  

Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.

For example,
Given input array A = [1,1,2],

Your function should return length = 2, and A is now [1,2].
*/

//快慢指针法
class Solution{
public:
	int removeDuplicates(vector<int>& nums){
		if(nums.empty()) return 0;
		int pre = 0, cur = 0, n = nums.size();
		while(cur < n)
			if(nums[pre] == nums[cur]) cur++;
			else(nums[++pre] = nums[cur++]);
		return pre + 1;
	}
}
//for循环
class Solution{
public:
	int removeDuplicates(vector<int>& nums){
		if(nums.empty()) return 0;
		int j = 0, n = nums.size();
		for(int i = 0; i < n; i++)
			if(nums[j] != nums[i])
				nums[++j] = nums[i];
		return j + 1;
	}
}