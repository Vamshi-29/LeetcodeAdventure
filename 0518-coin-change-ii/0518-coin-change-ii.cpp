class Solution {
public:
    int getsol(int target,vector<int>coins,int index,vector<vector<int>>&dp)
    {
        if(index==0)
        {
            return (target-coins[0]==0);
        }
        if(dp[index][target]!=-1)
        return dp[index][target];
        int pick=0;
        if(target>=coins[index])
        pick=1+getsol(target-coins[index],coins,index,dp);
        int notpick=getsol(target,coins,index-1,dp);
        return dp[index][target]=pick+notpick;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>> dp(n+1, vector<int>(amount+1, -1));
        return getsol(amount,coins,n-1,dp);
    }
};