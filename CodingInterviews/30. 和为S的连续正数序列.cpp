class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        vector<vector<int> > array;
        if(sum < 3){
            return array;
        }
        int start = 1, end = 2;
        int ssum = start + end;
        while(start < (1+sum)/2 && start < end){
            if(ssum < sum){
                end++;
                ssum+=end;
            }else if(ssum > sum){
                start++;
                ssum = ssum - start + 1;
            }else{
                vector<int> tmp;
                for(int i = start; i <= end; i++){
                    tmp.push_back(i);
                }
                array.push_back(tmp);
                start++;
                end++;
                ssum = sum + end - start + 1;
            }
        }
        return array;
    }
};
