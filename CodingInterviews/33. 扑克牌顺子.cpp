class Solution {
public:
    bool IsContinuous( vector<int> numbers ) {
        int len = numbers.size();
        if(len != 5){
            return false;
        }
        sort(numbers.begin(), numbers.end());
        
        int sum = 0;
        int num = 0;
        
        for(int i = 0; i < len; i++){
            if(numbers[i] == 0){
                num++;
            }
        }
        // 排序后，前面几个0要跳过，不然会直接return false
        // sum 记得 减去1
        for(int i = num+1; i < len; i++){
            if(numbers[i] - numbers[i-1] == 0){
                return false;
            }
            sum += numbers[i] - numbers[i-1] - 1;
        }
        if(num >= sum){
            return true;
        }else{
            return false;
        }
    }
};
