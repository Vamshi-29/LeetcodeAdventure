class Solution {
public:
    int getans(const vector<int>& prices, int index, int status, int n, vector<vector<int>>& dp, int maxDepth) {
        if (index >= n || maxDepth <= 0)
            return 0;
        if (dp[index][status] != -1)
            return dp[index][status];

        int profit = 0;
        if (status == 0) { 
            profit = max(0, max(-prices[index] + getans(prices, index + 1, 1, n, dp, maxDepth - 1), getans(prices, index + 1, 0, n, dp, maxDepth - 1)));
        } else { 
            profit = max(0, max(prices[index] + getans(prices, index + 1, 0, n, dp, maxDepth - 1), getans(prices, index + 1, 1, n, dp, maxDepth - 1)));
        }

        return dp[index][status] = profit;
    }

    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n, vector<int>(2, -1));
        int maxDepth = n; 
        return getans(prices, 0, 0, n, dp, maxDepth);
    }
};


