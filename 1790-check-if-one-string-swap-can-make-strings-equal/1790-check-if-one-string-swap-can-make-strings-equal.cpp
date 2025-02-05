class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int>cnt(26,0);

        for(int i=0;i<s1.length();i++)
        {
            cnt[s1[i]-'a']++;
        }
        int cntdiff=0;
        for(int i=0;i<s2.length();i++)
        {
            if(s1[i]!=s2[i])
            {
                cntdiff ++;
            }
            if(cntdiff > 2)
            return false;

            cnt[s2[i]-'a']--;
        }

        for(auto it:cnt)
        {
            if(it!=0)
            return false;
        }
        return true;
    }
};