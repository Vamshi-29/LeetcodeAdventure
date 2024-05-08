class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,n=nums.size();
        int maxsum=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
            maxsum=max(sum,maxsum);
            if(sum<0)
            sum=0;
        }
        return maxsum;
    }
};