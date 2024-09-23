class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        unordered_map<string,char>um;
        unordered_map<char,string>um1;
        int i=0,cnt=0;
        string word;
        while(ss>>word)
        {
            if(um.find(word)!=um.end())
            {
                if(um[word]!=pattern[i])
                return false;
                um[word]=pattern[i];
            }
            else if(um1.find(pattern[i])!=um1.end())
            {
                if(um1[pattern[i]]!=word)
                return false;
                um1[pattern[i]]=word;
            }
            else{
            um[word]=pattern[i];
            um1[pattern[i]]=word;
            }
            i++;
            cnt++;
        }
        if(cnt!=pattern.length())
        return false;
        if(i<pattern.length())
        return false;
        return true;

    }
};