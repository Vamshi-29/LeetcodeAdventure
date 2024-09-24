class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>fans;
        int i=0,n=intervals.size();
        while(i<n && intervals[i][1] < newInterval[0])
        {
            fans.push_back(intervals[i]);
            i++;
        }
        int mini=newInterval[0];
        int maxi=newInterval[1];
        while(i<n && intervals[i][0] <= newInterval[1])
        {
            mini=min(mini,intervals[i][0]);
            maxi=max(maxi,intervals[i][1]);
            i++;
        }
        fans.push_back({mini,maxi});
        while(i<n)
        {
            fans.push_back(intervals[i]);
            i++;
        }
        return fans;
    }
};