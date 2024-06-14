class Solution {
public:
    bool equalsubset(vector<int>nums,int sum,int index,vector<vector<bool>>&dp)
    {
        if(dp[index][sum]!=false)
        return dp[index][sum];
        if(sum==0)
        return true;
        if(index==0)
        return nums[0]==sum;
        bool notpick=equalsubset(nums,sum,index-1,dp);
        bool pick=false;
        if(nums[index]<=sum)
        pick=equalsubset(nums,sum-nums[index],index-1,dp);
        return dp[index][sum]=pick || notpick;
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        sum+=nums[i];
        if(sum%2==1)
        return false;
        sum/=2;
        vector<vector<bool>> dp(n, vector<bool>(sum + 1, false));
        //return equalsubset(nums,sum,nums.size()-1,dp);
        for(int i=0;i<n;i++)
        dp[i][0]=true;
        if (nums[0] <= sum)
            dp[0][nums[0]] = true;

        for(int i=1;i<n;i++)
        {
            for(int target=1;target<=sum;target++)
            {
                bool notpick=dp[i-1][target];
                bool pick=false;
                if(nums[i]<=target)
                pick=dp[i-1][target-nums[i]];
                dp[i][target]= pick || notpick;
            }
        }
        return dp[n-1][sum];
    }
};