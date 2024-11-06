class Solution {
public:
    int getsol(vector<int>nums,int n,vector<int>&dp)
    {
        if(n<0)
        {
            return 0;
        }
        if(dp[n]!=-1)
        return dp[n];
        int take=nums[n]+getsol(nums,n-2,dp);
        int nottake=getsol(nums,n-1,dp);
        dp[n]= max(take,nottake);
        return dp[n];
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return getsol(nums,n-1,dp);

    }
};