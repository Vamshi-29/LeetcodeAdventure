class Solution {
public:
    bool set(int a,int b)
    {
        int cnt=0;
        while(a)
        {
            cnt+= a&1;
            a=a>>1;
        }
        while(b)
        {
            cnt-=b&1;
            b=b>>1;
        }
        return !cnt;
    }
    bool canSortArray(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-1-i;j++)
            {
                if(nums[j]>nums[j+1] && set(nums[j],nums[j+1]))
                    swap(nums[j],nums[j+1]);
            }
        }
        for(int i=1;i<n;i++)
        {
            if(nums[i]<nums[i-1])
                return  false;
        }
        return true;
    }
};