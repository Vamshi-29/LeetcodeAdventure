class Solution {
public:
    int countSegments(string s) {
        int n=s.length(),cnt=0;
        if(s=="")
        return 0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==' ' && i > 0 && (s[i-1]!=' '))
            cnt++;
        }
        if(s[n-1]==' ')
        return cnt;
        return cnt+1;
    }
};