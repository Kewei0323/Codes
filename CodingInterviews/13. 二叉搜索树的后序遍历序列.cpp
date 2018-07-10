class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
        int length = sequence.size();
        if(length == 0){
            return false;
        }
        int i = 0;
        while(--length){
            while(sequence[i++] < sequence[length]);
            while(sequence[i++] > sequence[length]);
            
            if(i < length){
                return false;
            }
            i = 0;
        }
        return true;
    }
};
