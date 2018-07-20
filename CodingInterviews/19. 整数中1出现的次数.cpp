class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
        long long count = 0;
        long long i = 0;
        
        for(; i <= n; i++){
            long long tmp = i;
            while(tmp){
                if(tmp % 10 == 1){
                    count++;
                }
                tmp /= 10;
            }
        }
        return count;
    }
};
