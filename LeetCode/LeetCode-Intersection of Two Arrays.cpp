/*
 [LeetCode] Intersection of Two Arrays

 

Given two arrays, write a function to compute their intersection.

Example:
Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return [2].

Note:

    Each element in the result must be unique.
    The result can be in any order.

*/

class Solution{
public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2){
		unordered_map<int, int> m;
		vector<int> res;
		for(auto a : nums1) ++m[a];
		for(auto a : nums2){
			if(m[a]-- > 0) res.push_back(a);
		}
		return res;
	}
};


