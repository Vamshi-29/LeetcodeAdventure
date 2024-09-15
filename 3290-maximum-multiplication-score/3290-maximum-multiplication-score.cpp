class Solution {
public:
    long long solve(int index, int length, vector<int>& a, vector<int>& b, int n, vector<vector<long long>>& dp) {
        // Base cases
        if (length == 4)
            return 0;
        if (index == n)
            return INT_MIN;

        // Check if already computed
        if (dp[index][length] != -1)
            return dp[index][length];

        // Option 1: Not pick the current element
        long long notPick = solve(index + 1, length, a, b, n, dp);

        // Option 2: Pick the current element
        long long pick = (long long)a[length] * b[index] + solve(index + 1, length + 1, a, b, n, dp);

        // Store and return the maximum of the two options
        return dp[index][length] = max(pick, notPick);
    }

    long long maxScore(vector<int>& a, vector<int>& b) {
        int n = b.size();
        vector<vector<long long>> dp(n, vector<long long>(4, -1));
        return solve(0, 0, a, b, n, dp);
    }
};
