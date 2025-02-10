class Solution {
public:
    string clearDigits(string s) {
        string ans;
        for(auto it:s)
        {
            if(isalpha(it))
            {
                ans.push_back(it);
            }
            else
            {
                ans.pop_back();
            }
        }
        return ans;
    }
};