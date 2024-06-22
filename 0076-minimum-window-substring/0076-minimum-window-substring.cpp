class Solution {
public:
    bool check(vector<int>v1,vector<int>v2)
    {
        for(int i=0;i<26;i++)
        {
           if(v1[i]>v2[i])
           return false;
        }
        return true;
    }
    string minWindow(string s, string t) {
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        int start=0,end=0;
        int n1=t.length();
        string temp=s;
        for(int i=0;i<n1;i++)
        {
            t[i]=tolower(t[i]);
            v1[t[i]-'a']++;
        }
        int n=s.length(),start_ind=INT_MAX,len=INT_MAX;
        if(n1>n)
        return "";
        while(end<n && start<n)
        {
            s[end]=tolower(s[end]);
            v2[s[end]-'a']++;
            while(check(v1,v2) && start<n)
            {
                if(end-start+1<len)
                {
                    start_ind=start;
                    len=end-start+1;
                }
                v2[s[start]-'a']--;
                start++;
            }
            end++;
        }
        if(start_ind==INT_MAX)
        return "";
        return temp.substr(start_ind,len);
    }
};