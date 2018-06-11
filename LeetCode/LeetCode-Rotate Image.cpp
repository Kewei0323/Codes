/*
[LeetCode] Rotate Image 

You are given an n x n 2D matrix representing an image.
Rotate the image by 90 degrees (clockwise).

Follow up:
Could you do this in-place?

*/

//解法1：直接计算转化规律    略

//解法2：线对角线翻转，然后上下翻转

class Solution{
public:
	void rotate(vector<vector<int>>& matrix){
		int n = matrix.size();
		for (int i = 0; i < n - 1; ++i){
			for (int j = 0; j < n - i; ++j){
				swap(matrix[i][j], matrix[n - 1 - j][n - 1 - i]);
			}			
		}
		for (int i = 0; i < n / 2; ++i){
			for (int j = 0; j < n; ++j){
				swap(matrix[i][j], matrix[n - 1 - i][j]);
			}
		}
	}
};

