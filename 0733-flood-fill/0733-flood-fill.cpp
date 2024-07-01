class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int startcolor=image[sr][sc];
        image[sr][sc]=color;
        int m=image.size();
        int n=image[0].size();
        if(startcolor==color)
        return image;
        queue<pair<int,int>>qu;
        qu.push({sr,sc});
        vector<int>rowarray={1,-1,0,0};
        vector<int>colarray={0,0,1,-1};
        while(!qu.empty())
        {
            int row=qu.front().first;
            int col=qu.front().second;
            qu.pop();
            for(int i=0;i<4;i++)
            {
                int drow=row+rowarray[i];
                int dcol=col+colarray[i];
                if(drow>=0 && dcol>=0 && drow<m && dcol<n && image[drow][dcol]==startcolor)
                {
                    image[drow][dcol]=color;
                    qu.push({drow,dcol});
                }
            }
        }
        return image;
    }
};