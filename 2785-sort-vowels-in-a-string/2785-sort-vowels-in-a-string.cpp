class Solution {
public:
    string sortVowels(string s) {
        string capvowel;
        string smallvowel;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            smallvowel+=s[i];
            else if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            capvowel+=s[i];
        }
        sort(capvowel.begin(),capvowel.end(),greater<char>());
        sort(smallvowel.begin(),smallvowel.end(),greater<char>());
        int m1=capvowel.length()-1,i=0;
        while(m1>=0 && i<n)
        {
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                s[i]=capvowel[m1];
                m1--;
            }
            else if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                s[i]=capvowel[m1];
                m1--;
            }
            i++;
        }
        m1=smallvowel.length()-1;
        cout<<capvowel<<endl;
        cout<<smallvowel<<endl;
        while(m1>=0 && i<n)
        {
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                s[i]=smallvowel[m1];
                m1--;
            }
            else if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                s[i]=smallvowel[m1];
                m1--;
            }
            i++;
        }
        return s;
    }
};