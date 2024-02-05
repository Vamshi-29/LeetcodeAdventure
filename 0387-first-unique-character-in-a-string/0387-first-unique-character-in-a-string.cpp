class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>um;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            um[s[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(um[s[i]]==1)
            return i;
        }
        return -1;
    }
};