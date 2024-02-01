class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>temp;
        vector<vector<int>>result;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(nums[i+2]-nums[i]<=k)
            {
                temp.push_back(nums[i]);
                temp.push_back(nums[i+1]);
                temp.push_back(nums[i+2]);
                result.push_back(temp);
                i+=2;
                temp.clear();
            }
            else
            {
                k=0;
                break;
            }  
        }
        if(k==0)
            result.clear();
        return result;
    }
};