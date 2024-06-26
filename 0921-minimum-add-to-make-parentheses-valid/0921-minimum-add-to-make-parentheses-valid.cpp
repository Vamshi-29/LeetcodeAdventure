class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(st.empty())
            st.push(s[i]);
            else if(s[i]=='(')
            st.push(s[i]);
            else
            {
                if(st.top()=='(')
                st.pop();
                else
                st.push(s[i]);
            }
        }
        return st.size();
    }
};