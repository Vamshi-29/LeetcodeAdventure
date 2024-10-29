class Solution {
public:
    vector<int>temp;
    vector<vector<int>>fans;
    void getans(vector<int>nums,int index,int n){
    fans.push_back(temp);
        for(int i=index;i<n;i++)
        {
            if(i>index && nums[i]==nums[i-1])
            continue ;
            temp.push_back(nums[i]);
            getans(nums,i+1,n);
            temp.pop_back();
        }
        return ;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        getans(nums,0,nums.size());
        return fans;
    }
};