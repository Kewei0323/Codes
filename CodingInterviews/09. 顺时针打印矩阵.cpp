class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> result;
        if(row == 0 || col == 0){
            return result;
        }
        int left = 0, right = col - 1, top = 0, bottom = row - 1;
        while(left <= right && top <= bottom){
            for(int i = left; i <= right; i++){
                result.push_back(matrix[top][i]);
            }
            if(top < bottom){
                for(int i = top + 1; i <= bottom; i++){
                    result.push_back(matrix[i][right]);
                }
            }
            //top < bottom 针对单行矩阵的特殊范例
            if(left < right && top < bottom){
                for(int i = right - 1; i >= left; i--){
                    result.push_back(matrix[bottom][i]);
                }
            }
            if(top < bottom && left < right){
                for(int i = bottom - 1; i >= top + 1; i--){
                    result.push_back(matrix[i][left]);
                }
            }
            left++; right--; top++; bottom--;
        }
        return result;
    }
};
