class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<int,int>um1,um2;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(um1.find(s[i])!=um1.end())
            {
                if(um1[s[i]]==t[i] && um2[t[i]]==s[i])
                continue;
                else
                return false;
            }
            else
            {
                if(um2.find(t[i])!=um2.end())
                return false;
                um1[s[i]]=t[i];
                um2[t[i]]=s[i];
            }
        }
        return true;
    }
};