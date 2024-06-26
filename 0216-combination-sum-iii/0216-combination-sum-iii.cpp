class Solution {
public:
    void getsol(vector<int>&temp,int k,int n,int index,          vector<vector<int>>&fans,int sum)
    {
        if(temp.size()==k)
        {
            if(sum==n)
            fans.push_back(temp);
            return ;
        }
        for(int i=index;i<=9;i++)
        {
            temp.push_back(i);
            getsol(temp,k,n,i+1,fans,sum+i);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>fans;
        vector<int>temp;
        getsol(temp,k,n,1,fans,0);
        return fans;
    }
};