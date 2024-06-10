class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>dupli=heights;
        sort(dupli.begin(),dupli.end());
        int cnt=0,n=heights.size();
        for(int i=0;i<n;i++)
        {
            if(heights[i]!=dupli[i])
            cnt++;
        }
        return cnt;
    }
};