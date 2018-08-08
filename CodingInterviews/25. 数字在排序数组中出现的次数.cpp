class Solution {
public:
    int GetNumberOfK(vector<int> data ,int k) {
        int start,end,mid,count=0,i;
        unsigned int len = data.size();
        if(!len)
            return 0;
        start =0;
        end = len-1;
        mid = start;
        while(start<end)
        {
            mid = (start+end)>>1;
            if(k >data[mid])
                start = mid+1;
            if(k<data[mid])
                end = mid-1;
            if(k==data[mid])
                break;
        }
        i=mid;
        while( (i>=0) && (k==data[i]))
        {
            i--;
            count++;
        }
        i=mid+1;
        while((i<len)&& (k==data[i]) )
        {
            i++;
            count++;
        }
        return count;
 
    }
};
