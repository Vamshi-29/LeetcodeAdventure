class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>um;
        for(auto it:nums)
        {
            um[it]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto it:um)
        {
            pq.push({it.second,it.first});
        }
        vector<int>ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};