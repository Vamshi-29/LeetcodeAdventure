class Solution {
public:
    int findTheLongestSubstring(string s) {
        int n=s.length();
        unordered_map<int,int>um;
        int ans=0,maxlen=0;
        um[0]=-1;
        for(int i=0;i<n;i++){
            if(s[i]=='a')
            {
                ans=ans^(1<<0);
            }
            else if(s[i]=='e')
            {
                 ans=ans^(1<<1);
            }
            else if(s[i]=='i')
            {
                 ans=ans^(1<<2);
            }
            else if(s[i]=='o')
            {
                 ans=ans^(1<<3);
            }
            else if(s[i]=='u')
            {
                 ans=ans^(1<<4);
            }
            if(um.find(ans)!=um.end())
            {
                maxlen=max(maxlen,i-um[ans]);
            }
            else
            um[ans]=i;
        }
        return maxlen;
    }
};