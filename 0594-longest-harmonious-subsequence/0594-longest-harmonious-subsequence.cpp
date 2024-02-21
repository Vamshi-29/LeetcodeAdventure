class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>um;
        for(int i=0;i<n;i++)
        um[nums[i]]++;
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            if(um.find(nums[i]-1)!=um.end())
            {
                maxi=max(maxi,um[nums[i]]+um[nums[i]-1]);
            }
        }
        return maxi;
    }
};