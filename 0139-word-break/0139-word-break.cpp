class Solution {
public:
    bool getsol(string s,set<string>st,int index,int n,vector<int>&dp){
        if(index==n){
            return 1;
        }
        string temp;
        if(dp[index]!=-1)
        return dp[index];
        for(int i=index;i<n;i++)
        {
            temp=temp+s[i];
            if(st.find(temp)!=st.end())
            {
                if(getsol(s,st,i+1,n,dp))
                return 1;
            }
        }
        return dp[index]=0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        set<string>st;
        for(auto it:wordDict)
        {
            st.insert(it);
        }
        int n=s.length();
        vector<int>dp(n,-1);
        return getsol(s,st,0,n,dp);

    }
};