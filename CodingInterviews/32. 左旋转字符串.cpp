class Solution {
public:
    string LeftRotateString(string str, int n) {
        int len = str.length();
        if(len == 0){
            return "";
        }
        n = n % len;
        ReverseString(str, 0, n-1);
        ReverseString(str, n, len-1);
        ReverseString(str, 0, len-1);
        return str;
    }
    
    void ReverseString(string &str, int left, int right){
        while(left < right){
            int tmp = str[left];
            str[left] = str[right];
            str[right] = tmp;
            left++;
            right--;
        }
    }
};
