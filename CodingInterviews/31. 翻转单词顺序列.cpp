class Solution {
public:
    string ReverseSentence(string str) {
        int length = str.length();
        if(length == 0){
            return "";
        }
        // reverse string entirely
        ReverseString(str, 0, length-1);
        // reverse single word
        int start = 0;
        // warning the sentence of single world
        for(int i = 0; i <= length; i++){
            if(str[i] == ' ' || str[i] == '\0'){
                ReverseString(str, start, i - 1);
                start = i + 1;
            }
        }
        return str;
    }
    // add the &, otherwise, you will not obtain the reverse string, because this is a transaction of value
    void ReverseString(string &str, int left, int right){
        while(left < right){
            swap(str[left], str[right]);
            left++;
            right--;
        }
    }
};
