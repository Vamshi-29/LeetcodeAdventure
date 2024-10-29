class Solution {
public:
    vector<vector<int>>result;
    void getsol(vector<int>&candidates,int target,int index,vector<int>ans)
    {
        if(target<0)
        return ;
        if(target==0)
        {
            result.push_back(ans);
            return ;
        }
        for(int i=index;i<candidates.size();i++)
        {
            if(i>index && candidates[i]==candidates[i-1])
            continue;
            ans.push_back(candidates[i]);
            getsol(candidates,target-candidates[i],i+1,ans);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>ans;
        getsol(candidates,target,0,ans);
        return result;
    }
};