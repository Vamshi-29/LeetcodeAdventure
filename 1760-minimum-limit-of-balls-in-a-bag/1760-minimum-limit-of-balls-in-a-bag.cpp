class Solution {
public:
     int getsol(vector<int> nums, int maxop, int midder) {
    for (auto it : nums) {
    if (it > midder) {
        if (it % midder == 0) {
            maxop -= (it / midder - 1); 
        } else {
            maxop -= (it / midder); 
        }
        if (maxop < 0) return false; 
    }
}
        return true;
    }
    int minimumSize(vector<int>& nums, int maxOperations) {
        int start=1,end=0;
        for(auto it:nums)
        end=max(end,it);
        int ans=0;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(getsol(nums,maxOperations,mid))
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return ans;
    }
};