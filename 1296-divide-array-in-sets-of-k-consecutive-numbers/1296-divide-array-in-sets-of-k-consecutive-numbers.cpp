class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto i:mp)
        {
            int required=i.first;
            if(mp[i.first]==0)
            continue;
            else
            {
                for(int j=0;j<k;j++)
                {
                    if(mp.find(required)!=mp.end() && mp[required]!=0)
                    mp[required]--;
                    else
                    return false;
                    required++;
                }
            }
        }
        return true;
    }
};