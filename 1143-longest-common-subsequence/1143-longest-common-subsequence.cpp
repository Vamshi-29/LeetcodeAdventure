class Solution {
public:
   int getsol(const string& text1, const string& text2, int index1, int index2, vector<vector<int>>& dp) {
        if (index1 < 0 || index2 < 0)
            return 0;
        if (dp[index1][index2] != -1)
            return dp[index1][index2];
        if (text1[index1] == text2[index2]) {
            return dp[index1][index2] = 1 + getsol(text1, text2, index1 - 1, index2 - 1, dp);
        }
        return dp[index1][index2] = max(getsol(text1, text2, index1 - 1, index2, dp), getsol(text1, text2, index1, index2 - 1, dp));
    }

    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.length();
        int m = text2.length();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
        return getsol(text1, text2, n - 1, m - 1, dp);
    }
};