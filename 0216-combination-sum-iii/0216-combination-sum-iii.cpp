class Solution {
public:
    vector<vector<int>>result;
    void getsol(int k,int target,int index,vector<int>ans)
    {
        if(target<0 || ans.size()>k)
        return ;
        if(target==0 && ans.size()==k)
        {
            result.push_back(ans);
            return ;
        }
        for(int i=index;i<=9;i++)
        {
            ans.push_back(i);
            getsol(k,target-i,i+1,ans);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>ans;
        getsol(k,n,1,ans);
        return result;
    }
};