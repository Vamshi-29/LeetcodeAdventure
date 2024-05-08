class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i = 0; i < numRows; i++) {
            vector<int> temp;
            temp.push_back(1);
            if (i >= 2) {
                for (int j = 0; j < i - 1; j++) {
                    int tempans = ans[i - 1][j] + ans[i - 1][j + 1];
                    temp.push_back(tempans);
                }
            }
            if (i != 0)
                temp.push_back(1);
            ans.push_back(temp); // Add temp vector to ans
        }
        return ans;
    }
};
