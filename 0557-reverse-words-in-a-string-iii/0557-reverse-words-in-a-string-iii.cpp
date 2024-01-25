class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        int j=0,i=0;
        for(i=0;i<n;i++)
        {
            if(s[i]==' ')
            {
                reverse(begin(s)+j,begin(s)+i);
                j=i+1;
            }
        }
        reverse(begin(s)+j,begin(s)+i);
        return s;
    }
};