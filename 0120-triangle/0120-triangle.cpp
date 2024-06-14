class Solution {
public:
    int getsol(vector<vector<int>>triangle,int rindex,int cindex,int rows,int cols,vector<vector<int>>&dp)
    {
        if(dp[rindex][cindex]!=-1)
        return dp[rindex][cindex];
        if(rindex==rows)
        return triangle[rindex][cindex];
        if(cindex>cols)
        return 0;
        int pick=triangle[rindex][cindex]+getsol(triangle,rindex+1,cindex,rows,cols,dp);
        int notpick=triangle[rindex][cindex]+getsol(triangle,rindex+1,cindex+1,rows,cols,dp);
        return dp[rindex][cindex]=min(pick,notpick);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int rows=triangle.size();
        // vector<vector<int> > dp(rows, vector<int>(rows, -1));
        //  return getsol(triangle,0,0,rows-1,rows-1,dp);
        vector<vector<int> > dp(rows, vector<int>(rows, 0));
        for(int i=0;i<rows;i++)
        dp[rows-1][i]=triangle[rows-1][i];
        for(int i=rows-2;i>=0;i--)
        {
            for(int j=i;j>=0;j--)
            {
                int pick=triangle[i][j]+dp[i+1][j];
                int notpick=triangle[i][j]+dp[i+1][j+1];
                dp[i][j]=min(pick,notpick);
            }
        }
        return dp[0][0];
    }
};