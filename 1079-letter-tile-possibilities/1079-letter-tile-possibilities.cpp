class Solution {
public:
    unordered_set<string>st;
    void getsol(string tiles,vector<int>used,string ans)
    {
        st.insert(ans);
        for(int i=0;i<tiles.length();i++)
        {
            if(used[i]==0)
            {
                used[i] = 1;
                getsol(tiles,used,ans+tiles[i]);
                used[i] = 0;
            }
        }
    }   
    int numTilePossibilities(string tiles) {
        vector<int>used(tiles.size(),0);
        getsol(tiles,used,"");
        return st.size()-1;
    }
};