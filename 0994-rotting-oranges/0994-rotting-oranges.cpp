class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
    queue<pair<pair<int, int>, int>> qu;
    int n = grid.size();
    int m = grid[0].size();
    
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 2) {
                qu.push({{i, j}, 0});
            }
        }
    }

    vector<int> rowarray = {1, -1, 0, 0};
    vector<int> colarray = {0, 0, 1, -1};
    int maxtime = 0;

    while (!qu.empty()) {
        int crow = qu.front().first.first;
        int ccol = qu.front().first.second;
        int time = qu.front().second;
        qu.pop();
        maxtime = max(maxtime, time);

        for (int i = 0; i < 4; i++) {
            int drow = crow + rowarray[i];
            int dcol = ccol + colarray[i];
            if (drow >= 0 && dcol >= 0 && drow < n && dcol < m && grid[drow][dcol] == 1) {
                grid[drow][dcol] = 2;
                qu.push({{drow, dcol}, time + 1});
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 1) {
                return -1;
            }
        }
    }

    return maxtime;
}
};