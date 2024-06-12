class Solution {
public:
    bool jumpgame(vector<int>& nums, int index, int n, vector<int>& dp) {
        if (index >= n - 1)
            return true;
        
        if (dp[index] != -1)
            return dp[index];
        
        bool ans = false;
        for (int i = 1; i <= nums[index]; i++) {
            ans = ans || jumpgame(nums, index + i, n, dp);
            if (ans == true)
                return dp[index] = true;
        }
        
        return dp[index] = false;
    }

    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return jumpgame(nums, 0, n, dp);
    }
};
