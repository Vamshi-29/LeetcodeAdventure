class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string token;
        string result;
        while(ss >> token)
        {
            reverse(begin(token),end(token));
            result+=token+" ";
        }
        result.pop_back();
        return result;
    }
};