//Solution1
class Solution {
public:
    void reOrderArray(vector<int> &array) {
        vector<int> result;
        int num = array.size();
        for(int i = 0; i < num; i++){
            if(array[i] % 2 == 1){
                result.push_back(array[i]);
            }
        }
        for(int i = 0; i < num; i++){
            if(array[i] % 2 == 0){
                result.push_back(array[i]);
            }
        }
        array = result;
    }
};

//Solution2
class Solution {
public:
    void reOrderArray(vector<int> &array) {
        int num = array.size();
        for(int i = 0; i < num; i++){
            for(int j = num - 1; j > i; j--){
                if(array[j] % 2 == 1 && array[j-1] % 2 == 0){
                    swap(array[j], array[j-1]);
                }
            }
        }
    }
};
