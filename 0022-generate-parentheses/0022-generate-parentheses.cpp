class Solution {
public:
    void vp(string str,int ob,int cb,int n,vector<string>&ans)
    {
        if(str.length()==n)
        {
            ans.push_back(str);
            return;
        }
        if(ob<n/2)
        vp(str+'(',ob+1,cb,n,ans);
        if(cb<ob)
        vp(str+')',ob,cb+1,n,ans);
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        vp("(",1,0,n*2,ans);
        return ans;
    }
};