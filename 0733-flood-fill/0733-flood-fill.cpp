class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m=image.size();
        int n=image[0].size();
        int startcolor=image[sr][sc];
        if(startcolor==color)
        return image;
        vector<vector<int>>check(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==sr && j==sc)
                check[i][j]=color;
                else
                check[i][j]=image[i][j];
            }
        }
        queue<pair<int,int>>qu;
        qu.push({sr,sc});
        int drow[4]={-1,0,1,0};
        int dcol[4]={0,1,0,-1};
        while(!qu.empty())
        {
            int crow=qu.front().first;
            int ccol=qu.front().second;
            qu.pop();
            for(int i=0;i<4;i++)
            {
                int nrow=crow+drow[i];
                int ncol=ccol+dcol[i];
                if(nrow>=0 && ncol>=0 && nrow<m && ncol<n && check[nrow][ncol]==startcolor)
                {
                    qu.push({nrow,ncol});
                    check[nrow][ncol]=color;
                }
            }
        }
        return check;
    }
};