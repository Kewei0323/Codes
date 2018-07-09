class Solution {
public:
    double Power(double base, int exponent) {
        double res = 1;
        int n = exponent;
        //判断exponent是否为0和负数
        if(n < 0){
            if(base == 0){
                printf("分母不能为0");
            }
            n = -n;
        }
        if(n == 0) {
            return 1;
        }
        //循环运算，exponent右移一位，相当于res的平方一次；最后exponent为1的时候，就是res本身
        while(n != 0){
            if((n & 1) == 1){
                res *= base;
            }
            base *= base;
            n>>=1;
        }
        return exponent > 0 ? res : (1/res);
    }
};
