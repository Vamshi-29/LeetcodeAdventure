class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,int>um;
        vector<vector<string>>res;
        int k=0;
        for(int i=0;i<n;i++)
        {
            string temp=strs[i];
            sort(temp.begin(),temp.end());
            if(um.find(temp)==um.end())
            {
                res.push_back({strs[i]});
                um[temp]=k;
                k++;
            }
            else
            {
                int posi=um[temp];
                res[posi].push_back(strs[i]);
            }
        }
        return res;
    }
};