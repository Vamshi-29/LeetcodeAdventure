class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>result;
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        result.push_back({intervals[0][0],intervals[0][1]});
        for(int i=1;i<n;i++)
        {
            if(result.back()[1]>=intervals[i][0])
            {
                if(intervals[i][1] > result.back()[0])
                {
                    result.back()[1]=intervals[i][1];
                }
            }
            else
            {
                result.push_back({intervals[i][0],intervals[i][1]});
            }
        }
        return result;
    }
};