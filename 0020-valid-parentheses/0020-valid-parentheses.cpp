class Solution {
public:
    bool isValid(string s) {
        stack<char>sta;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            sta.push(s[i]);
            else
            {
                if(!sta.empty() && s[i]==')' && sta.top()=='(')
                sta.pop();
                else if(!sta.empty() && s[i]=='}' && sta.top()=='{')
                sta.pop();
                else if(!sta.empty() && s[i]==']' && sta.top()=='[')
                sta.pop();
                else
                return false;
            }
        }
        if(!sta.empty())
        return false;
        return true;
    }
};