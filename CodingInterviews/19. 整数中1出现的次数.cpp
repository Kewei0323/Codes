// Solution 1
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

// Solution2
class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
        int sum = 0;
        for(int i = 1; i <= n; i *= 10){
            int a = n/i, b = n%i;
            sum += (a+8)/10 * i + (a%10==1) * (b+1);
        }
        return sum;
    }
};
