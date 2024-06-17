class Solution {
public:
    int getsol(vector<int>& nums, int index, int previndex,int n,vector<vector<int>>&dp) {
    if (index==n)
        return 0;
    int pick = 0;
    if(dp[index][previndex+1]!=-1)
        return dp[index][previndex+1];
    if (previndex == -1 || nums[index] > nums[previndex])
        pick = 1 + getsol(nums, index + 1, index ,n,dp);
    int notpick = getsol(nums, index + 1, previndex,n,dp);
    return dp[index][previndex+1]=max(pick, notpick);
    }
    int lengthOfLIS(vector<int>& nums) {
    int n=nums.size();
    vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
    return getsol(nums, 0, -1,n,dp);
}

};