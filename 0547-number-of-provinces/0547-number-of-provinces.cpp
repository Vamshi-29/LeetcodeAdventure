class Solution {
public:
    void dfs(vector<int>adj[],vector<int>&vis,int node)
    {
        vis[node]=1;
        for(int i=0;i<adj[node].size();i++)
        {
            if(!vis[adj[node][i]])
            {
                vis[adj[node][i]]=1;
                dfs(adj,vis,adj[node][i]);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        // convert to adjacency list !!
        int n=isConnected.size();
        vector<int>adj[n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j]==1 && i!=j){
                adj[i].push_back(j);
                adj[j].push_back(i);
                }
            }
        }
        // make a visited node 
        vector<int>vis(n,0);
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                cnt++;
                dfs(adj,vis,i);
            }
        }
        return cnt;
    }
};