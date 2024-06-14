class Solution {
public:
    void getsol(vector<int>nums,vector<int>&visited,vector<vector<int>>&fans,vector<int>&temp)
    {
        if(temp.size()==nums.size())
        {
            fans.push_back(temp);
            return ;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(visited[i])
            {
                visited[i]=0;
                temp.push_back(nums[i]);
                getsol(nums,visited,fans,temp);
                temp.pop_back();
                visited[i]=1;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<int>visited(n,1);
        vector<vector<int>>fans;
        vector<int>temp;
        getsol(nums,visited,fans,temp);
        return fans;

    }
};