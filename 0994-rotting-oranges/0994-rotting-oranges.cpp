class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<int>> check(m, vector<int>(n, 0)); 
    queue<pair<pair<int, int>, int>> qu;

    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 2) {
                check[i][j] = 2;
                qu.push({{i, j}, 0});
            } else if (grid[i][j] == 1) {
                check[i][j] = 1; 
            }
        }
    }

    int maxtime = 0;
    int drow[4] = {-1, 0, 1, 0};
    int dcol[4] = {0, 1, 0, -1};

    
    while (!qu.empty()) {
        int row = qu.front().first.first;
        int col = qu.front().first.second;
        int time = qu.front().second;
        maxtime = max(maxtime, time);
        qu.pop();
        
        for (int i = 0; i < 4; i++) { 
            int ncol = col + dcol[i];
            int nrow = row+ drow[i];
            if (nrow >= 0 && ncol >= 0 && nrow < m && ncol < n && check[nrow][ncol] == 1 && grid[nrow][ncol] == 1) {
                qu.push({{nrow, ncol}, time + 1});
                check[nrow][ncol] = 2; 
            }
        }
    }

    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 1 && check[i][j] != 2) { 
                return -1;
            }
        }
    }

    return maxtime;
}
};