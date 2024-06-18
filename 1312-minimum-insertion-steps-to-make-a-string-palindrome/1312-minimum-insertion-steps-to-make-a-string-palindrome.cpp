class Solution {
public:
      int getsol(const string& str, int start, int end, vector<vector<int>>& dp) {
        if (start > end) 
            return 0; 
        if (start == end) 
            return 0; 
        if (dp[start][end] != -1) 
            return dp[start][end];

        if (str[start] == str[end]) {
            dp[start][end] = getsol(str, start + 1, end - 1, dp);
        } else {
            dp[start][end] = 1 + min(getsol(str, start + 1, end, dp), getsol(str, start, end - 1, dp));
        }
        return dp[start][end];
    }

    int minInsertions(string s) {
        int n = s.length();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return getsol(s, 0, n - 1, dp);
    }
};


