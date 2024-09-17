class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        stringstream ss(s1);
        string token;
        unordered_map<string,int>um1;
        while(ss>>token)
        {
            um1[token]++;
        }
        stringstream ss2(s2);
        string token2;
        while(ss2>>token2)
        {
            um1[token2]++;
        }
        vector<string>fans;
        for(auto it:um1)
        {
            if(it.second==1)
            fans.push_back(it.first);
        }
        return fans;
    }
};