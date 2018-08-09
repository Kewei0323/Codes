class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
        int len = data.size();
        if(len < 2){
            return;
        }
        
        int count = 0;
        for(int i = 0; i < len; i++){
            count ^= data[i];
        }
        
        int index = FindIndex(count);
        *num1 = *num2 = 0;
        for(int i = 0; i < len; i++){
            if(IsBit(data[i], index)){
                *num1 ^= data[i];
            }else{
                *num2 ^= data[i];
            }
        }
    }
    
    int FindIndex(int num){
        int index = 0;
        while((num & 1) == 0 && index < 8 * sizeof(int)){
            num = num >> 1;
            index++;
        }
        return index;
    }
    
    bool IsBit(int num, int index){
        num = num >> index;
        return num & 1;
    }
};
