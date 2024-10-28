class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==1)
        return 0;
        if(n==2)
        return abs(nums[0]-nums[1]);
        int req_num=0;
        if(n&1)
        {
            req_num=nums[(n/2)];
        }
        else{
            req_num=nums[(n/2)]+nums[(n/2)-1];
            req_num=req_num/2;
        }
        int ans=0;
        for(auto it:nums)
        {
            ans+=abs(it-req_num);
        }
        return ans;
    }
};

