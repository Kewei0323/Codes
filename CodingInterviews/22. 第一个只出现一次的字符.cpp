class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        if(str.size() == 0){
            return -1;
        }
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
