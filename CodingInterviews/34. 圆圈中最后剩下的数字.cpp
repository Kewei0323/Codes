// Solution 1: 

class Solution {
public:
    int LastRemaining_Solution(int n, int m)
    {
        if(n == 0 || m == 0){
            return -1;
        }
        
        int s = 0;
        for(int i = 2; i <= n; i++){
            s = (s + m) % i;
        }
        
        return s;
    }
};

/*
*循环链表；
*数组模拟链表；
