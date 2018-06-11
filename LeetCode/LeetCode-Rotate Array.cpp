/* 
Rotate Array

Rotate an array of n elements to the right by k steps.
For example, with n = 7 and k = 3, the array [1,2,3,4,5,6,7] is rotated to [5,6,7,1,2,3,4].

Note:
Try to come up as many solutions as you can, there are at least 3 different ways to solve this problem.

[show hint]
Hint:
Could you do it in-place with O(1) extra space?
Related problem: Reverse Words in a String II

Credits:
Special thanks to @Freezen for adding this problem and creating all test cases.
*/

// Time Limit Exceeded
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int tmp = 0, n = nums.size();
        for (int i = 0; i < k; i++){
            tmp = nums[n-1];
            for (int j = n-1; j > 0; j--) nums[j] = nums[j-1];
            nums[0] = tmp;
        }        
    }
};


// Accepted method:   **** k %= n ****
class Solution{
public:
	void rotate(vector<int>& nums, int k){
        if (nums.empty()) return;
        int n = nums.size();
        k %= n;
        std::rotate(nums.begin(), nums.end() - k, nums.end());

	}
};


// 三步翻转法
class Solution{
public:
	void rotate(vector<int>& nums, int k){
		int n = nums.size();
		if (n <= 1) return;
		Reverse(nums, 0, n - k - 1);
		Reverse(nums, n - k, n - 1);
		Reverse(nums, 0, n - 1);
	}
private:
	void Reverse(vector<int>& nums, int left, int right){
		for (int i =left, j = right; i < j; i++, j--) swap(nums[i], nums[j]);
	}
};





// ****int nums[]****    下方程序错误多，仅用于参考



class Solution {
public:
    void rotate(int nums[], int n, int k) {
        if(n <= 1){
            return;
        }//if
        k = k % n;
        if(k <= 0){
            return;
        }//if
        // 翻转前n-k个
        Reverse(nums,0,n - k - 1);
        // 翻转后k个
        Reverse(nums,n - k,n - 1);
        // 翻转全部
        Reverse(nums,0,n - 1);
    }
private:
    void Reverse(int nums[],int left,int right){
        int tmp;
        for(int i = left,j = right;i < j;++i,--j){
            // 交换
            swap(nums[i],nums[j]);
        }//for
    }
};


