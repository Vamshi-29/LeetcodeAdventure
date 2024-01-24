class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>um;
        int maxi=0,cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
            um[nums[i]]++;
        maxi=1;
        for(auto i:um)
        {
            if(i.second>maxi)
                maxi=i.second;
        }
        for(auto i:um)
        {
            if(i.second==maxi)
                cnt+=maxi;
        }
        return cnt;
    }
};