class Solution {
public:
int gridmin(vector<vector<int>>grid,int rows,int cols,vector<vector<int>>&dp)
{
    if(rows>=0 && cols>=0 && dp[rows][cols]!=-1 )
    return dp[rows][cols];
    if(rows==0 && cols==0)
    return grid[0][0];
    if(rows<0 || cols<0)
    return int(1e9);
    int up=grid[rows][cols]+gridmin(grid,rows-1,cols,dp);
    int side=grid[rows][cols]+gridmin(grid,rows,cols-1,dp);
    return dp[rows][cols]=min(up,side);
}
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        
       vector<vector<int>> dp(m,vector<int>(n, 0));
      
        // return gridmin(grid,m-1,n-1,dp);
        dp[0][0]=grid[0][0];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0 && j==0)
                continue;
                int up=0;
                int down=0;
                
                up=grid[i][j];
                if(i>0)
                up+=dp[i-1][j];
                else
                up+=1e9;
                down=grid[i][j];
                if(j>0) down+=dp[i][j-1];
                else
                down+=1e9;
                dp[i][j]= min(up, down);
            }
        }
        return dp[m-1][n-1];
    }
};