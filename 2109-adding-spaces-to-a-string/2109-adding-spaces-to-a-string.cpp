class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n=s.length();
        int ssize=spaces.size();
        // sort(spaces.begin(),spaces.end());
        int start=0;
        string ans(n+ssize,' ');
        for(int i=0;i<n;i++)
        {
            if(start!=ssize && i==spaces[start]){
            ans[i+start]=' ';
            start++;
            }
            ans[i+start]=s[i];
        }
        return ans;
    }
};