class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        map<char, int> hashmp;
        //put element of array into hashmap
        for(int i = 0; i < str.size(); i++){
            hashmp[str[i]]++;
        }
        //iteration
        for(int i = 0; i < str.size(); i++){
            if(hashmp[str[i]] == 1)
                return i;
        }
        return -1;
    }
};
