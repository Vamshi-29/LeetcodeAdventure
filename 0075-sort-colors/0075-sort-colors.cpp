class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int start=0,end=n-1,ptr=0;
        while(ptr<=end)
        {
            if(nums[ptr]==0)
            {
                swap(nums[ptr],nums[start]);
                start++;
                ptr++;
            }
            else if(nums[ptr]==1)
            {
                ptr++;
            }
            else
            {
                swap(nums[end],nums[ptr]);
                end--;
            }
        }
    }
};