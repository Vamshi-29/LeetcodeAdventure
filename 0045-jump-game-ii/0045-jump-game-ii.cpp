class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size()-1;
        int maxi=0,cnt=0,i=0;
        if(n==0)
        return 0;
        while(i<=n)
        {
            if(nums[i]+i>maxi)
            {
                maxi=nums[i]+i;
                cnt++;
            }
            if(maxi>=n)
            return cnt;
            // if(nums[i]==0)
            // cnt--;
            i++;
        }
        return cnt;

    }
};