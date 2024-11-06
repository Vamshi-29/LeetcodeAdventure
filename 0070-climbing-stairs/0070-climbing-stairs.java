class Solution {
    public int getans(int n,int[] dp)
    {
        if(n<0)
        return 0;
        if(n==0)
        return 1;
        if(dp[n]!=-1)
        return dp[n];
        int pick=getans(n-1,dp);
        int picktwo=getans(n-2,dp);
        return dp[n]=pick+picktwo;
    }
    public int climbStairs(int n) {
        int[] dp=new int[n+1];
        Arrays.fill(dp,-1);
        return getans(n,dp);
    }
}