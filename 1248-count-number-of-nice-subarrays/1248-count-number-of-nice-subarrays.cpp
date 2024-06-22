class Solution {
public:
    int getsol(vector<int>nums,int goal)
    {
        if(goal<0)
        return 0;
        int n=nums.size();
        int start=0,end=0,cnt=0,ans=0;
        while(end<n)
        {
            if((nums[end]&1))
            cnt++;
            while(cnt>goal)
            {
                if(nums[start]&1)
                cnt--;
                start++;
            }
            ans=ans+(end-start+1);
            end++;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
      return getsol(nums,k)-getsol(nums,k-1);
    }
};