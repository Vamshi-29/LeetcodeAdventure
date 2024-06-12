class Solution {
public:
    void combisum2(vector<int>arr,int target,int index,int n,vector<int>&temp,vector<vector<int>>&fans)
    {
        if(target==0)
        {
            fans.push_back(temp);
            return ;
        }
        if(target<0 || index>n)
        return ;
        for(int i=index;i<n;i++)
        {
            if(i>index && arr[i]==arr[i-1])
            continue;
            temp.push_back(arr[i]);
            combisum2(arr,target-arr[i],i+1,n,temp,fans);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>fans;
        vector<int>temp;
        combisum2(candidates,target,0,candidates.size(),temp,fans);
        return fans;

    }
};