class Solution {
public:
    int minLength(string s) {
        string str;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B' && !str.empty() && str.back()=='A')
            {
                str.pop_back();
            }
            else if(s[i]=='D' && !str.empty() && str.back()=='C')
            {
                str.pop_back();
            }
            else
            str+=s[i];
        }
        return str.length();

    }
};