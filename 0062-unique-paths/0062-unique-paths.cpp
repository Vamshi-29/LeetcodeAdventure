class Solution {
public:
    int getsol(int m,int n,int row,int col,vector<vector<int>>&dp)
    {
        if(row==m-1 && col==n-1)
        return 1;
        if(row<0 || col<0 || row>=m || col>=n)
        return 0;
        if(dp[row][col]!=-1)
        return dp[row][col];
        int down=0,right=0;
        down=down+getsol(m,n,row+1,col,dp);
        right=right+getsol(m,n,row,col+1,dp);
        return dp[row][col]=down+right;

    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return getsol(m,n,0,0,dp);
    }
};