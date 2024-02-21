class Solution {
public:
    int findLHS(vector<int>& nums) {
       unordered_map<int,int>um;
       int n=nums.size();
       for(int i=0;i<n;i++)
       {
           um[nums[i]]++;
       } 
       int maxi=0;
       sort(nums.begin(),nums.end());
       for(int i=0;i<n-1;i++)
       {
           if(nums[i+1]-nums[i]==1)
           {
               int currentans=um[nums[i]]+um[nums[i+1]];
               maxi=max(maxi,currentans);
           }
       }
       return maxi;
    }
};