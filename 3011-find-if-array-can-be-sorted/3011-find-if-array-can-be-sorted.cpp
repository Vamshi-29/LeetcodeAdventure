class Solution {
public:
    int samebits(int num){
        int cnt=0;
        while(num)
        {
            if(num&1)
            cnt++;
            num=num/2;
        }
        return cnt;
    }
    bool canSortArray(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(nums[j]>nums[j+1] && samebits(nums[j])==samebits(nums[j+1]))
                {
                    swap(nums[j],nums[j+1]);
                }
            }
        }
        for(auto it:nums)
        cout<<it<<" ";
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1])
            return false;
        }
        return true;
    }
};