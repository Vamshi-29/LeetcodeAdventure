class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<int>rowcnt(n,m);
        vector<int>colcnt(m,n);
        for(int p=0;p<(m*n);p++)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if(arr[p] == mat[i][j])
                    {
                        rowcnt[i]--;
                        colcnt[j]--;
                        if(rowcnt[i]==0 || colcnt[j]==0)
                        return p;
                    }
                }
            }
        }
        return -1;
    }
};


