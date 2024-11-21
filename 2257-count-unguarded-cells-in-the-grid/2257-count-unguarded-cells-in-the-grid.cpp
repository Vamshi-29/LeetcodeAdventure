class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> grid(m, vector<int>(n, 0));

        
        for (auto& wall : walls) {
            grid[wall[0]][wall[1]] = 1; 
        }

       
        for (auto& guard : guards) {
            grid[guard[0]][guard[1]] = 2; 
        }

        
        for (auto& guard : guards) {
            int guardrow = guard[0];
            int guardcol = guard[1];

            
            for (int i = guardrow + 1; i < m; i++) {
                if (grid[i][guardcol] == 1 || grid[i][guardcol] == 2) break;
                grid[i][guardcol] = 3; 
            }

            
            for (int i = guardrow - 1; i >= 0; i--) {
                if (grid[i][guardcol] == 1 || grid[i][guardcol] == 2) break;
                grid[i][guardcol] = 3; 
            }

           
            for (int j = guardcol + 1; j < n; j++) {
                if (grid[guardrow][j] == 1 || grid[guardrow][j] == 2) break;
                grid[guardrow][j] = 3; 
            }

            
            for (int j = guardcol - 1; j >= 0; j--) {
                if (grid[guardrow][j] == 1 || grid[guardrow][j] == 2) break;
                grid[guardrow][j] = 3; 
            }
        }

        
        int unguardedCount = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) {
                    unguardedCount++;
                }
            }
        }

        return unguardedCount;
    }
};
