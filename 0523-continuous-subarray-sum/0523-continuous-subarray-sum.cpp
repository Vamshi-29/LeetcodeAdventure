class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
       unordered_map<int,int>um;
        int n=nums.size(),cnt=0;
        int sum=0;
        for(int i=0;i<n;i++)
        {
           
                sum=sum+nums[i];
                if(sum%k==0 && i>=1)
                return true;
                if(um.find(sum%k)!=um.end())
                {

                    if(abs(i-um[sum%k])>=2)
                    return true;
                }
                else
                {
                    um[sum%k]=i;
                }
            
        }
        return false;
    }
};