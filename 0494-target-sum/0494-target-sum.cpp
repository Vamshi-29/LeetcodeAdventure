class Solution {
public:
    int getsol(const vector<int>& nums, int index, int target, int n, vector<vector<int>>& dp) {
       
        if (target < -1001 || target > 1001) {
            return 0;
        }

        if (index == n) {
            return (target == 0) ? 1 : 0;
        }
        
        if (dp[index][target + 1001] != -1) { 
            return dp[index][target + 1001];
        }

        int pick = getsol(nums, index + 1, target - nums[index], n, dp);
        int notpick = getsol(nums, index + 1, target + nums[index], n, dp);
        
        dp[index][target + 1001] = pick + notpick;
        
        return dp[index][target + 1001];
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int sum = 2001; 

        vector<vector<int>> dp(n + 1, vector<int>(sum + 1, -1));

        return getsol(nums, 0, target, n, dp);
    }
};
