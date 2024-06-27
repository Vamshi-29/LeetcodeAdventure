class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int, int> edgeCount;
        for(auto edge:edges)
        {
            for(auto val:edge)
            edgeCount[val]++;
        }
        int n=edges.size();
        for(auto i:edgeCount)
        {
            if(i.second==n)
            return i.first;
        }
        return 0;
    }
};