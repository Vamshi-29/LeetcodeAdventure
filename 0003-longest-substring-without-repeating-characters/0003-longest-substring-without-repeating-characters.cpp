class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>um;
        int start=0,end=0,len=0;
        int n=s.length();
        while(end<n)
        {
            if(um.find(s[end])==um.end())
            um[s[end]]++;
            else
            {
                while(s[start]!=s[end])
                {
                    um.erase(s[start]);
                    start++;
                }
                um.erase(s[start]);
                start++;
                um[s[end]]++;
            }
            len=max(len,(end-start)+1);
            end++;
        }
        return len;
    }
};