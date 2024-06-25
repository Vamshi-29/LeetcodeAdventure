class Solution {
public:
    int cnt=0;
    int getans(vector<vector<int>>&grid,int row,int col,int n,int m)
    {
        if(row==n-1 && col==m-1 && grid[row][col]==0){
        return 1;
        }
        if(grid[row][col]==1)
        return 0;
        int up=0,right=0;
        if(row!=n-1)
        {
            up=getans(grid,row+1,col,n,m);
        }
        if(col!=m-1)
        {
            right=getans(grid,row,col+1,n,m);
        }
        return (up+right);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        return getans(obstacleGrid,0,0,n,m);
        // return cnt;
    }
};