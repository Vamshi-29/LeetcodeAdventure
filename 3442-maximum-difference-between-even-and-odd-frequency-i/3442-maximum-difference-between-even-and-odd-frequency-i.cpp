class Solution {
public:
    int maxDifference(string s) {
        vector<int>chars(26,0);
        for(auto it:s)
        {
            chars[it-'a']++;
        }
        int maxodd=INT_MIN,mineven=INT_MAX;
        for(auto it:chars)
        {
            if(it&1)
            {
                maxodd = max(maxodd,it);
            }
            else
            {
                if(it!=0)
                mineven = min(mineven,it);
            }
        }
        return maxodd - mineven;
    }
};