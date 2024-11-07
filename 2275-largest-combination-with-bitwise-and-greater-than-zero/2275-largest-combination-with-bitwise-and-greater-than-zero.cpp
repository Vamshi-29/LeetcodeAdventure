class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        vector<int>arr(32,0);
        for(auto it:candidates)
        {
            int num=it;
            int cnt=0;
            while(num)
            {
                if(num&1)
                {
                    arr[cnt]++;
                }
                num=num/2;
                cnt++;
            }
        }
        int maxans=0;
        for(auto it:arr)
        {
            maxans=max(maxans,it);
        }
        return maxans;
    }
};