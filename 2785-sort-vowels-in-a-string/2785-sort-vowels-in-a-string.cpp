class Solution {
public:
    string sortVowels(string s) {
        int n=s.length();
        unordered_map<char,int>um;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            um[s[i]]++;
            else if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            um[s[i]]++;
        }
        string ans="AEIOUaeiou";
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]       =='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                while(um[ans[j]]==0)
                {
                    j=j+1;
                }
                s[i]=ans[j];
                um[ans[j]]--;
            }
        }
        return s;
    }
};