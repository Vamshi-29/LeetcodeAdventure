class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n=s.length();
        unordered_map<int,int>um,um1;
        for(int i=0;i<n;i++)
            um[s[i]]++;
        stack<char>sta;
        for(int i=0;i<n;i++)
        {
            um[s[i]]--;
            if(um1[s[i]]==1)
            continue;
            while(!sta.empty() && sta.top()>s[i] && um[sta.top()]>0)
            {
                um1[sta.top()]=0;
                sta.pop();
            }
            sta.push(s[i]);
            um1[s[i]]=1;
            
        }
        string ans;
        while(!sta.empty())
        {
            ans=sta.top()+ans;
            sta.pop();
        }
        return ans;

    }
};