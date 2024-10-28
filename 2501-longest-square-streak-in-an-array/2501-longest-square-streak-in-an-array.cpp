class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_map<int,int>um;
        sort(nums.begin(),nums.end());
        int ans=-1;
        for(auto it:nums)
        {
            int sqrtnum=sqrt(it);
            if(sqrtnum*sqrtnum==it && um.find(sqrtnum)!=um.end())
            {
                um[it]=um[sqrtnum]+1;
                ans=max(ans,um[it]);
            }
            else
            {
                um[it]=1;
            }
        }
        return ans;
    }
};