class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>ans(26,0);
        for(auto it:magazine)
        {
            ans[it-'a']++;
        }
       // cout<<ransomNote.length()<<" "<<magazine.length()<<endl;
        for(auto it:ransomNote)
        {
            if(ans[it-'a']==0)
            return false;
            ans[it-'a']--;
        }
        return true;
    }
};