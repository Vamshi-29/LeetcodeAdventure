class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>vist(n,vector<int>(m,0));
        vector<vector<int>>ans(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>qu;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    ans[i][j]=0;
                    qu.push({{i,j},0});
                    vist[i][j]=1;
                }
            }
        }
        int drow[]={1,-1,0,0};
        int dcol[]={0,0,1,-1};
        while(!qu.empty())
        {
            int crow=qu.front().first.first;
            int ccol=qu.front().first.second;
            int dist=qu.front().second;
            qu.pop();
            for(int i=0;i<4;i++)
            {
                int prow=crow+drow[i];
                int pcol=ccol+dcol[i];
                if(prow>=0 && pcol>=0 && prow<n && pcol<m)
                {
                    if(vist[prow][pcol]==0)
                    {
                        vist[prow][pcol]=1;
                        ans[prow][pcol]=dist+1;
                        qu.push({{prow,pcol},dist+1});
                    }
                }
            }
        }
        return ans;


    }
};