class Solution {
public:
   int getsol(vector<vector<int>>& triangle, int row, int col, int n, vector<vector<int>>& dp) {
    if (row >= n || col>=n) {
        return 0; 
    }
    if (dp[row][col] != -1) {
        return dp[row][col];
    }
    int pick = triangle[row][col] + getsol(triangle, row + 1, col + 1, n, dp);
    int notpick = triangle[row][col] + getsol(triangle, row + 1, col, n, dp);
    return dp[row][col] = min(pick, notpick);
}

int minimumTotal(vector<vector<int>>& triangle) {
    int n = triangle.size();
    vector<vector<int>> dp(n, vector<int>(n, -1)); 
    return getsol(triangle, 0, 0, n, dp);
}
};