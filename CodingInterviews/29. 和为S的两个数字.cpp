class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        int len = array.size();
        vector<int> arr2;
        if(len == 0){
            return arr2;
        }
        int i = 0, j = len-1;
        int count = INT_MAX;
        
        while(i < j){
            if(array[i] + array[j] > sum){
                j--;
            }else if(array[i] + array[j] < sum){
                i++;
            }else{
                if(count > array[i]*array[j]){
                    count = array[i]*array[j];
                    if(!arr2.empty()){
                        arr2.pop_back();
                        arr2.pop_back();
                    }
                    arr2.push_back(array[i]);
                    arr2.push_back(array[j]);
                }
                i++;
                j--;
            }
        }
        return arr2;
    }
};
