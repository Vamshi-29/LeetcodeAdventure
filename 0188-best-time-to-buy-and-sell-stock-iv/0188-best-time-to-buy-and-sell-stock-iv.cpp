class Solution {
public:
    int getans(vector<int> prices, int index, int status, int not1,vector<vector<vector<int>>>& dp) {
        if (index >= prices.size() || not1 == 0)
            return 0;
        if(dp[index][status][not1]!=-1)
        return dp[index][status][not1];
        int profit = 0;
        if (status == 0) { 
            profit = max(0, max(-prices[index] + getans(prices, index + 1, 1, not1,dp), getans(prices, index + 1, 0, not1,dp)));
        } else { 
            profit = max(0, max(prices[index] + getans(prices, index + 1, 0, not1 - 1,dp), getans(prices, index + 1, 1, not1,dp)));
        }

        return dp[index][status][not1]=profit;
    }
    int maxProfit(int k,vector<int>& prices) {
        int n=prices.size();
         vector<vector<vector<int>>> dp(n,
                                    vector<vector<int>>(2, vector<int>(k + 1, -1)));
        return getans(prices, 0, 0, k,dp);
    }
};