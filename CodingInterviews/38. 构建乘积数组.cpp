class Solution {
public:
    vector<int> multiply(const vector<int>& A) {
        int len = A.size();
        vector<int> B(len, 1);
        for(int i = 0; i < len; i++){
            for(int j = i + 1; j < len; j++){
                B[i] *= A[j];
            }
        }
        for(int i = len - 1; i > 0; i--){
            for(int j = i - 1; j >= 0; j--){
                B[i] *= A[j];
            }
        }
        return B;
    }
};
