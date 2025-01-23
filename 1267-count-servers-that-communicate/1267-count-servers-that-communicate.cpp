class Solution {
public:
    bool rowcheck(int row, int col, const vector<vector<int>>& grid) {
        int n = grid[0].size();
        for (int j = 0; j < n; j++) {
            if (j != col && grid[row][j] == 1) 
                return true;
        }
        return false;
    }

    bool colcheck(int row, int col, const vector<vector<int>>& grid) {
        int n = grid.size();
        for (int i = 0; i < n; i++) {
            if (i != row && grid[i][col] == 1) 
                return true;
        }
        return false;
    }

    int countServers(vector<vector<int>>& grid) {
        int cnt = 0;
        int n = grid.size(), m = grid[0].size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {

                    if (rowcheck(i, j, grid) || colcheck(i, j, grid)) {
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};