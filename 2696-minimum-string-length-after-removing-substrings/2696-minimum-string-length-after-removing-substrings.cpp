class Solution {
public:
    int minLength(string s) {
        stack<char>sta;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
           if(s[i]=='B' && !sta.empty())
           {
               if(sta.top()=='A')
               sta.pop();
               else
               sta.push(s[i]);
           }
           else if(s[i]=='D' && !sta.empty())
           {
               if(sta.top()=='C')
               sta.pop();
                else
                sta.push(s[i]);
           }
           else
           sta.push(s[i]);
        }
        return sta.size();
    }
};