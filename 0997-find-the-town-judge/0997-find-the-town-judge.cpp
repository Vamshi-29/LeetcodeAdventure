class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,int>um;
        int rows=trust.size();
        for(int i=1;i<=n;i++)
        um[i]=0;
        for(int i=0;i<rows;i++)
        {
                if(um.find(trust[i][0])!=um.end())
                {
                    um.erase(trust[i][0]);
                }
                 if(um.find(trust[i][1])!=um.end())
                    um[trust[i][1]]++;
            
        }
        // cout<<um.size()<<endl;
        // if(um.size()==0)
        // return -1;
        for(auto i:um)
        {
            if(i.second==n-1)
            return i.first;
        }
        return -1;

    }
};