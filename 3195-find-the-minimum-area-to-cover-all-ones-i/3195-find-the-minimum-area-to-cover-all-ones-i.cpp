class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int height=0;
        int n=grid.size();
        int m=grid[0].size();
        int mini=0,maxi=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    mini=min(mini,i);
                    maxi=max(maxi,i);
                }
            }
        }
        int length=(maxi-mini);
        cout<<length<<endl;
        mini=maxi=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[j][i]==1)
                {
                    mini=min(mini,i);
                    maxi=max(maxi,i);
                }
            }
        }
        int breadth=(maxi-mini);
        cout<<breadth<<endl;
        if(length==0)
        return breadth;
        else if(breadth==0)
        return length;
        return (length+1)*(breadth+1);
    }
};