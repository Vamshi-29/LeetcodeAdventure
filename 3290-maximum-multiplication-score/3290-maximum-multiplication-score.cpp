class Solution {
public:
    long long ans(vector<int>& a, vector<int>& b, int start1, int start2, int blen, vector<vector<long long>>& dp) {
        if (start1 == 4) {
            return 0;
        }
        if (start2 >= blen) {
            return -1e9;
        }
        if (dp[start1][start2] != -1) {
            return dp[start1][start2];
        }

        long long fans = LLONG_MIN;
        for (int i = start2; i < blen; i++) {
            long long tempans = ans(a, b, start1 + 1, i + 1, blen, dp) + (long long)(a[start1] * (long long)b[i]);
            fans = max(fans, tempans);
        }

        return dp[start1][start2] = fans;
    }

    long long maxScore(vector<int>& a, vector<int>& b) {
        vector<vector<long long>> dp(a.size(), vector<long long>(b.size(), -1));
        return ans(a, b, 0, 0, b.size(), dp);
    }
};
