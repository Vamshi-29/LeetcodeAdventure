class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int n=nums.size(),maxi=INT_MIN;
        for(int i=0;i<n;i++)
        maxi=max(maxi,nums[i]);
        vector<int>cnt(n+maxi,0);
        for(int i=0;i<n;i++)
        {
            cnt[nums[i]]++;
        }
        int a=0;
        for(int i=0;i<cnt.size();i++)
        {
            int e=cnt[i];
            if(e>1)
            {
                a=a+(e-1);
                cnt[i+1]=cnt[i+1]+(e-1);
            }
        }
        return a;

    }
};