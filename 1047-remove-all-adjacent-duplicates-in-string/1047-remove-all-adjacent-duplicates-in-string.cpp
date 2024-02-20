class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>sta;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(!sta.empty() && sta.top()==s[i])
            {
                sta.pop();
            }
            else
            sta.push(s[i]);
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