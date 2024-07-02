class Solution {
public:
    vector<vector<string>>ans;
    void nqueens(int col,int n,vector<int>&left,vector<int>&ld,vector<int>&ud,vector<string>&board)
    {
        if(col==n)
        {
            ans.push_back(board);
            return ;
        }
        for(int row=0;row<n;row++)
        {
            if(left[row]==0 && ld[row+col]==0 && ud[n-1+col-row]==0)
            {
                board[row][col]='Q';
                left[row]=1;
                ld[row+col]=1;
                ud[n-1+col-row]=1;
                nqueens(col+1,n,left,ld,ud,board);
                board[row][col]='.';
                left[row]=0;
                ld[row+col]=0;
                ud[n-1+col-row]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
     vector<string>board(n,string(n,'.'));
     vector<int>left(n);
     vector<int>ld(2*n-1);
     vector<int>ud(2*n-1);
     nqueens(0,n,left,ld,ud,board);
     return ans;
    }
};