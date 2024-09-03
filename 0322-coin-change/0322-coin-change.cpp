class Solution {
public:

int getsol(vector<int>& coins, int target, int index, int n, vector<vector<int>>& dp) {
    if (target == 0) {
        return 0;
    }
    if (index >= n) {
        return INT_MAX - 999;  
    }
    if (dp[index][target] != -1) {
        return dp[index][target];
    }

    int pick = INT_MAX;
    if (target >= coins[index]) {
        pick = 1 + getsol(coins, target - coins[index], index, n, dp);
    }
    int notpick = getsol(coins, target, index + 1, n, dp);

    return dp[index][target] = min(pick, notpick);
}

int coinChange(vector<int>& coins, int amount) {
    if (amount == 0) return 0;  

    int n = coins.size();
    vector<vector<int>> dp(n, vector<int>(amount + 1, -1));
    int ans = getsol(coins, amount, 0, n, dp);

    return (ans == INT_MAX - 999) ? -1 : ans;  
}
};