class Solution {
public:
    int appendCharacters(string s, string t) {
        int start1=0,start2=0;
        int n=s.length();
        int m=t.length();
        while(start1<n && start2<m)
        {
            if(s[start1]==t[start2])
            {
                start1++;
                start2++;
            }
            else
            {
                start1++;
            }
        }
        cout<<start1<<" "<<m<<" ";
        return (m-start2);

    }
};