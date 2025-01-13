class Solution {
public:
    int minimumLength(string s) {
        unordered_map<int,int>um2,um;
        int n=s.length();
        for(auto it:s)
        {
            um[it]++;
        } 
        for(int i=0;i<n;i++)
        {
            um2[s[i]]++;
            int leftcnt = um2[s[i]];
            int rightcnt = um[s[i]] - um2[s[i]] ;
            if(leftcnt >=2 && rightcnt>=1)
            {
                um[s[i]]=um[s[i]]-2;
                um2[s[i]]--;
            }
        }
        int ans=0;
        for(auto it:um)
        ans=ans+it.second;
        return ans;

    }
};

//   aba acbcbb
//    acbcb