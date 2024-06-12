class Solution {
public:
    void subset2(vector<int>arr,int index,int n,vector<int>&temp,vector<vector<int>>&fans)
    {
    fans.push_back(temp);
    for(int i=index;i<n;i++)
    {
        if(i>index && arr[i]==arr[i-1])
        continue;
        temp.push_back(arr[i]);
        subset2(arr,i+1,n,temp,fans);
        temp.pop_back();
    }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>fans;
        vector<int>temp;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        subset2(nums,0,n,temp,fans);
        return fans;
    }
};