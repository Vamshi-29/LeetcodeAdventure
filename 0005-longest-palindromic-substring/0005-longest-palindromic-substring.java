class Solution {
    public int yespalin(String s, int start, int end, int[][] dp) {
        if (start >= end)
            return 1;
        if (dp[start][end] != -1)
            return dp[start][end];
        if (s.charAt(start) != s.charAt(end)) {
            dp[start][end] = 0;
            return 0;
        }
        return dp[start][end] = yespalin(s, start + 1, end - 1, dp);
    }

    public String longestPalindrome(String s) {
        int n = s.length();
        int maxlen = 0;
        StringBuilder reqstr = new StringBuilder();
        
        int[][] dp = new int[n][n];
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                dp[i][j] = -1;
            }
        }

       
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                
                if (yespalin(s, i, j, dp) == 1) {
                    if (j - i + 1 > maxlen) {
                        reqstr = new StringBuilder(s.substring(i, j + 1)); 
                        maxlen = Math.max(maxlen, j - i + 1);
                    }
                }
            }
        }
        return reqstr.toString();
    }
}
