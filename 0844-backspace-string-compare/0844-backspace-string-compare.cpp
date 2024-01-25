class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ans,ans2;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(!ans.empty() && s[i]=='#')
            ans.pop_back();
            else if(s[i]!='#')
            ans=ans+s[i];
        }
        cout<<ans<<endl;
        int n1=t.length();
        for(int i=0;i<n1;i++)
        {
            if(!ans2.empty() && t[i]=='#')
            ans2.pop_back();
            else if(t[i]!='#')
            ans2=ans2+t[i];
        }
        cout<<ans2<<endl;
        return ans2==ans;
    }
};