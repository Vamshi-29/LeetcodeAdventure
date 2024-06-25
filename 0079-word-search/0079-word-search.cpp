class Solution {
public:
    bool getans(vector<vector<char>>& board,string word,int row,int col,int index,int n,int m)
    {
        if(index==word.length())
        return true;

        if(row<0 || row>=n || col<0 || col>=m || board[row][col]!=word[index] || board[row][col]=='!')
        return false;

        char ch=board[row][col];
        board[row][col] = '!';
        bool left=false,right=false,down=false,up=false;
        left=getans(board,word,row,col-1,index+1,n,m);
        right=getans(board,word,row,col+1,index+1,n,m);
        down=getans(board,word,row+1,col,index+1,n,m);
        up=getans(board,word,row-1,col,index+1,n,m);

        board[row][col]=ch;
        return left || right || down || up;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]==word[0])
                {
                    if(getans(board,word,i,j,0,n,m))
                    return true;
                }
            }
        }
        return false;
    }
};