class Solution {
public:
    int getans(string str1,string str2,int start1,int start2,int n,int m,vector<vector<int>>&dp)
    {
        if(start1>=n)
        return m-start2;
        if(start2>=m)
        return n-start1;
        if(str1[start1]==str2[start2])
        {
            return dp[start1][start2]=getans(str1,str2,start1+1,start2+1,n,m,dp);
        }
        else
        {
            int insertOp = getans(str1, str2, start1, start2 + 1, n, m,dp);    
            int deleteOp = getans(str1, str2, start1 + 1, start2, n, m,dp);     
            int replaceOp = getans(str1, str2, start1 + 1, start2 + 1, n, m,dp); 
            return dp[start1][start2]= 1 + min({insertOp, deleteOp, replaceOp});

        }
    }
    int minDistance(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return getans(word1,word2,0,0,n,m,dp);
    }
};