class Solution {
public:
    int countKeyChanges(string s) {
        int n=s.length(),cnt=0;
        for(int i=0;i<n-1;i+=1)
        {
            char a = tolower(s[i]);
            char b= tolower(s[i+1]);
            if(a!=b)
                cnt++;
        }
        return cnt;
    }
};