class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int ans=abs(nums[i]);
            if(nums[ans]<0)
            return ans;
            nums[ans]=nums[ans]*(-1);
        }
        return 0;
    }
};