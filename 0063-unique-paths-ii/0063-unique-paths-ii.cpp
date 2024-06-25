class Solution {
public:
    int getsol(vector<vector<int>>& obs,int row,int col,vector<vector<int>>&dp)
    {
        if(row==0 && col==0 && obs[row][col]!=1)
        {
            return 1;
        }
        if(dp[row][col]!=-1)
        return dp[row][col];
        if(obs[row][col]==1)
        return 0;
        int up=0,left=0;
        if(row)
        up=up+getsol(obs,row-1,col,dp);
        if(col)
        left=left+getsol(obs,row,col-1,dp);
        dp[row][col]=left+up;
        return dp[row][col];

    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int row=obstacleGrid.size();
        int col=obstacleGrid[0].size();
        vector<vector<int>> dp(row, vector<int>(col, -1));
        return getsol(obstacleGrid,row-1,col-1,dp);
    }
};