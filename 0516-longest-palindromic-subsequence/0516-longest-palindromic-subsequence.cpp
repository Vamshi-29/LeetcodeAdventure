class Solution {
public:
    int getsol(const string& str, int start, int end,vector<vector<int>>&dp) {
        if (start > end)
            return 0;
        if (start == end)
            return 1;
        if(dp[start][end]!=-1)
            return dp[start][end];
        if (str[start] == str[end]) {
            return dp[start][end]= 2 + getsol(str, start + 1, end - 1,dp);
        } else {
            return dp[start][end]=max(getsol(str, start, end - 1,dp), getsol(str, start + 1, end,dp));
        }
    }

    int longestPalindromeSubseq(string s) {
        int n=s.length();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        return getsol(s, 0, s.length() - 1,dp);
    }
};