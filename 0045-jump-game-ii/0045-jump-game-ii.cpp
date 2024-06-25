class Solution {
public:
    int getsol(vector<int>& nums, int index, vector<int>& dp) {
        if (index >= nums.size() - 1)
            return 0;

        if (dp[index] != -1)
            return dp[index];

        int mini = 1e9;
        for (int i = index + 1; i <= index + nums[index] && i < nums.size(); i++) {
            mini = min(mini, 1 + getsol(nums, i, dp));
        }

        return dp[index] = mini;
    }

    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return getsol(nums, 0, dp);
    }
};
