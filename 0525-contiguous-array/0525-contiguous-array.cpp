class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>um;
        int sum=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            sum+=1;
            else
            sum=sum-1;
            if(sum==0)
            ans=i+1;
            else{
            if(um.find(sum)!=um.end())
            {
                ans=max(ans,i-um[sum]);
            }
            else
            um[sum]=i;
            }
        }
        return ans;
    }
};