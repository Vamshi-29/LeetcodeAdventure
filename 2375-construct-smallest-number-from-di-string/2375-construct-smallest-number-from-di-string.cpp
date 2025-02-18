class Solution {
public:
    string smallestNumber(string pattern) {
        string ans;
        stack<int>st;

        for(int i=0;i<=pattern.length();i++)
        {
            st.push(i+1);
            if(i==pattern.length() || pattern[i]=='I')
            {
                while(!st.empty()){
                ans = ans + to_string(st.top());
                st.pop();
                }
            }
        }

        return ans;
    }
};