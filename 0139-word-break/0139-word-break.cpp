class Solution {
public:
    unordered_map<string,int >um;
    int n1;
    bool getans(string s,int index,vector<int>&dp)
    {
        if(index==n1)
        return true;
        string str;
        if(dp[index]!=-1)
        return dp[index];
        for(int i=index;i<n1;i++)
        {
            str=str+s[i];
            if(um.find(str)!=um.end())
            {
                if(getans(s,i+1,dp))
                return true;
            }
        }
        return dp[index]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=wordDict.size();
        n1=s.length();
        for(int i=0;i<n;i++)
        um[wordDict[i]]++;
        vector<int>dp(n1,-1);
        return getans(s,0,dp);
    }
};