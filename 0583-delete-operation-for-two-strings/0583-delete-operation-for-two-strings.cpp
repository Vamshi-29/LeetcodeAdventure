class Solution {
public:
int getsol(string word1,string word2,int end1,int end2,vector<vector<int>>&dp)
    {
        if(end1<0 && end2<0)
        return 0;
        if(end1<0 || end2<0)
        {
            return max(end1,end2)+1;
        }
        if(dp[end1][end2]!=-1)
        return dp[end1][end2];
        if(word1[end1]==word2[end2])
        {
            return dp[end1][end2]=getsol(word1,word2,end1-1,end2-1,dp);
        }
        else
        {
           return dp[end1][end2]=1+min(getsol(word1,word2,end1-1,end2,dp),getsol(word1,word2,end1,end2-1,dp));
        }
    }
    int minDistance(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return getsol(word1,word2,n-1,m-1,dp);
    }
    
};