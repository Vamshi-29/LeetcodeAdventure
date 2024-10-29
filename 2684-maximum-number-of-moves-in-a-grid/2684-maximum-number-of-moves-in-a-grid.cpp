class Solution {
public:

    int getsol(vector<vector<int>>& grid, int row, int col, int n, int m,vector<vector<int>>&dp) {
        
        if (row < 0 || row >= n) return 0; 
        if (col < 0 || col >= m) return 0; 
        
       
        if (dp[row][col] != -1) return dp[row][col];

        int one = 0, two = 0, three = 0;

        
        if (row >= 1 && col < m - 1 && grid[row - 1][col + 1] > grid[row][col]) {
            one = 1 + getsol(grid, row - 1, col + 1, n, m,dp);
        }

        
        if (col < m - 1 && grid[row][col + 1] > grid[row][col]) {
            two = 1 + getsol(grid, row, col + 1, n, m,dp);
        }

        
        if (row < n - 1 && col < m - 1 && grid[row + 1][col + 1] > grid[row][col]) {
            three = 1 + getsol(grid, row + 1, col + 1, n, m,dp);
        }

       
        return dp[row][col] = max({one, two, three});
    }

    int maxMoves(vector<vector<int>>& grid) {
        int maxans = 0;
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> dp(n, vector<int>(m, -1));
        
        
        for (int i = 0; i < n; i++) {
            maxans = max(maxans, getsol(grid, i, 0, n, m,dp)); 
        }
        return maxans;
    }
};
