class Solution {
public:
    int getsol(vector<int>&nums,int index,int size,vector<int>&dp)
    {
        if(index >= size)
        return 0;
        
        if(dp[index]!=-1)
        return dp[index];

        int one = nums[index]+getsol(nums,index+2,size,dp);

        int two = getsol(nums,index+1,size,dp);

        return dp[index]=max(one,two);
    }
    int rob(vector<int>& nums) {
        vector<int>dp1(nums.size()+1,-1);
        vector<int>dp2(nums.size()+1,-1);
        if(nums.size()==1)
        return nums[0];
        return max(getsol(nums,0,nums.size()-1,dp1),getsol(nums,1,nums.size(),dp2));
    }
};