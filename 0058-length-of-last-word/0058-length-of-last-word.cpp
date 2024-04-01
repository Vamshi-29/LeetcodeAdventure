class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length(),cnt=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]==' '&& i!=n-1 && isalpha(s[i+1]))
            return cnt;
            if(s[i]!=' ')
            cnt++;
        }
        return cnt;
    }
};