class Solution {
public:
    int getsol(vector<int>prices,int index,int status,vector<vector<int>>&dp)
    {
        if(index>=prices.size())
        return 0;
        int price=0;
        if(dp[index][status]!=-1)
        return dp[index][status];
        if(status==1)
        {
           price = max(0, max(-prices[index] + getsol(prices, index + 1, 0,dp), getsol(prices, index + 1, 1,dp)));
        }
        else
        {
            price = max(0, max(prices[index] + getsol(prices, index + 2, 1,dp), getsol(prices, index + 1, 0,dp)));
        }
        return dp[index][status]=price;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return getsol(prices,0,1,dp);
    }
};