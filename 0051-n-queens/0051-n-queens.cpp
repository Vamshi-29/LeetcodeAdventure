class Solution {
public:
    bool cankeep(int row,int col,vector<string>board,vector<vector<string>>ans,int n)
    {   
        int duprow=row;
        int dupcol=col;
        while(row>=0 && col>=0)
        {
            if(board[row][col]=='Q')
            return false;
            row--;
            col--;
        }
        row=duprow;
        col=dupcol;
        while(col>=0)
        {
            if(board[row][col]=='Q')
            return false;
            col--;
        }
        row=duprow;
        col=dupcol;
        while(row<n && col>=0)
        {
            if(board[row][col]=='Q')
            return false;
            row++;
            col--;
        }
        return true;
    }
    void getans(int col,vector<string>&board,vector<vector<string>>&ans,int n)
    {
        if(col==n)
        {
            ans.push_back(board);
            return ;
        }
        for(int row=0;row<n;row++)
        {
            if(cankeep(row,col,board,ans,n))
            {
                board[row][col]='Q';
                getans(col+1,board,ans,n);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
      vector<string> board(n, string(n, '.')); 
       vector<vector<string>>ans;
       getans(0,board,ans,n);
       return ans;
    }
};