class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int cnt=0;
        for(auto it:s)
        {
            if(it=='(')
            {
                cnt++;
                if(cnt > 1)
                {
                    ans = ans + it;
                }
            }
            else
            {
                cnt--;
                if(cnt > 0)
                ans = ans +it;
            }
        }
        return ans;
    }
};