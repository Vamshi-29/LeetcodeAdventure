class Solution {
    public int ans(int[] nums,int n,int index,int[] dp)
    {
        if(index>=n)
        return 0;
        if(dp[index]!=-1)
        return dp[index];
        int pick=nums[index]+ans(nums,n,index+2,dp);
        int notpick=ans(nums,n,index+1,dp);

        return dp[index]=Math.max(pick,notpick);

    }
    public int rob(int[] nums) {
        int n=nums.length;
        int[] dp=new int[n+1];
        Arrays.fill(dp,-1);
        return ans(nums,n,0,dp);
    }
}