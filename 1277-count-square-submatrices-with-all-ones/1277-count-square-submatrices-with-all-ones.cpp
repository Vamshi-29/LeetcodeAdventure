class Solution {
public:
    
    int getsol(const vector<vector<int>>& matrix, int i, int j, vector<vector<int>>& dp, int n, int m) {
       
        if (i >= n || j >= m)
            return 0;
        if (matrix[i][j] == 0)
            return 0;

       
        if (dp[i][j] != -1)
            return dp[i][j];

        
        int right = getsol(matrix, i + 1, j, dp, n, m);
        int diag = getsol(matrix, i + 1, j + 1, dp, n, m);
        int down = getsol(matrix, i, j + 1, dp, n, m);
        
        
        return dp[i][j] = 1 + min({right, diag, down});
    }
    
    
    int countSquares(vector<vector<int>>& matrix) {
        int n = matrix.size();
        if (n == 0) return 0; 
        int m = matrix[0].size();
        int result = 0;
        
       
        vector<vector<int>> dp(n, vector<int>(m, -1));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                result += getsol(matrix, i, j, dp, n, m); 
            }
        }
        return result;
    }
};
