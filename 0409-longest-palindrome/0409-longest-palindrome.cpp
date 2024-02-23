class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int,int>um;
        int n=s.length();
        for(int i=0;i<n;i++)
        um[s[i]]++;
        int maxodd=0,cnt=0,oddpresent=0;
        for(auto i:um)
        {
            if(i.second % 2 == 0)
            cnt+=i.second;
            else {
            cnt+=i.second-1;
            oddpresent=1;
            }
        }
        if(oddpresent==1)
        return cnt+1;
        return cnt;
    }
};