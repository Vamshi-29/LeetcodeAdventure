class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int>um;
        int n=nums.size();
        for(int i=0;i<n;i++)
        um[nums[i]]=i;
        int ans=-1,maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>maxi && nums[i]>0)
            {
                int find=(-1)*nums[i];
                if(um.find(find)!=um.end())
                { 
                    ans=nums[i];
                    maxi=nums[i];
                }
            }
        }
        return ans;
    }
};