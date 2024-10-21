class Solution {
public:
    int fun(int ind, string temp, string &s, unordered_map<string,int>&mp){
        if(ind>=s.length())return 0;
        int take = 0;
        temp+=s[ind];
        if(!mp[temp]){
            mp[temp]=1;
            take = 1 + fun(ind+1,"",s,mp);
            mp[temp]=0;
        }
        int notTake = fun(ind+1,temp,s,mp);
        return max(take,notTake);
    }
    int maxUniqueSplit(string s) {
        unordered_map<string,int>mp;
        return fun(0,"",s,mp);
    }
};
