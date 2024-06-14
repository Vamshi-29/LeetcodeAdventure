class Solution {
public:
     int minipath(vector<vector<int>>& grid, int down, int right, int n, int m,vector<vector<int>>&dp) {
        if (down == n - 1 && right == m - 1) {
            return grid[down][right];
        }
        if(down!=n-1 && right!=m-1){
        if(dp[down][right]!=-1)
        return dp[down][right];
        }
        int downsum = INT_MAX, rightsum = INT_MAX;
        
        if (down != n - 1) {
            downsum = grid[down][right] + minipath(grid, down + 1, right, n, m,dp);
        }
        
        if (right != m - 1) {
            rightsum = grid[down][right] + minipath(grid, down, right + 1, n, m,dp);
        }
        if(down!=n-1 && right!=m-1)
        return dp[down][right]=min(downsum, rightsum);
        return min(downsum,rightsum);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> dp(n+1,vector<int>(m+1, -1));
        return minipath(grid,0,0,n,m,dp);
    }
};