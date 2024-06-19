class Solution {
public:
    int getsol(string s,string t,int start1,int start2,int n,int m,vector<vector<int>>&dp)
    {
        if(start2==m)
        {
            return 1;
        }
        if(start1>=n)
        return 0;
        if(dp[start1][start2]!=-1)
        return dp[start1][start2];
        int one=0,two=0,three=0;
        if(s[start1]==t[start2])
        {
            one = getsol(s,t,start1+1,start2+1,n,m,dp);
            two = getsol(s,t,start1+1,start2,n,m,dp);
        }
        else
        {
            three = getsol(s,t,start1+1,start2,n,m,dp);
        }
        return dp[start1][start2]=(one+two+three);
    }
    int numDistinct(string s, string t) {
        int n=s.length(),m=t.length();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return getsol(s,t,0,0,n,m,dp);
    }
};