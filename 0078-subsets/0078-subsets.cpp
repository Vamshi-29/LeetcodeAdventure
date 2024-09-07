class Solution {
public:
    vector<vector<int>>result;
    void getans(vector<int>nums,int index,vector<int>&ans)
    {
        if(index==-1)
        {
            result.push_back(ans);
            return ;
        }
        ans.push_back(nums[index]);
        getans(nums,index-1,ans);
        ans.pop_back();
        getans(nums,index-1,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        getans(nums,n-1,ans);
        return result;
    }
};