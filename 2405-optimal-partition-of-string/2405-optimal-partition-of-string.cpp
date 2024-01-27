class Solution {
public:
    int partitionString(string s) {
        int  n=s.length(),cnt=0;
        unordered_map<char,int>um;
        for(int i=0;i<n;i++)
        {
            if(um.find(s[i])!=um.end())
            {
                cnt++;
                um.clear();
            }
            um[s[i]]++;
        }
        return cnt+1;
    }
};