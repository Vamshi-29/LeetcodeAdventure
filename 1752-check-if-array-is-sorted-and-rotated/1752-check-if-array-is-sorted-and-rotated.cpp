class Solution {
public:
    bool check(vector<int>& nums) {
        int flag=0,pivot=-10;
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                flag=1;
                pivot=i;
                break;
            }
        }
        if(flag==0)
        return true;
        for(int i=pivot+1;i<n;i++)
        {
            if(nums[i]>nums[0])
            return false;
            if(i!=pivot+1 && nums[i]<nums[i-1])
            return false;
        }
        return true;

}
};