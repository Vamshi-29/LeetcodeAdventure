class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int size1=nums1.size();
        int size2=nums2.size();
        int ans=0;
        if(size2&1)
        {
            for(auto it:nums1)
            ans= ans ^ it;
        }
        if(size1&1)
        {
            for(auto it:nums2)
            ans=ans ^ it;
        }
        return ans;

    }
};