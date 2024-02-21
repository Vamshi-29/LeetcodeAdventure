class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n2=nums2.size();
        int n1=nums1.size();
        for(int i=0;i<n1;i++)
        {
            int start=0;
            int end=n2-1;
            while(start<=end)
            {
                int mid=(start)+(end-start)/2;
                if(nums2[mid]==nums1[i])
                return nums1[i];
                else if(nums2[mid]>nums1[i])
                    end=mid-1;
                else
                start=mid+1;
            }
        }
        return -1;
    }
};