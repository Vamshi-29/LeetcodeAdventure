class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int n=arrays.size();
        int prev_diff=0;
        int maxi=0,mini=INT_MAX;
        for(int i=0;i<n;i++){
            int m=arrays[i].size();

            if(i!=0 && maxi - arrays[i][0] > prev_diff){
                prev_diff=maxi-arrays[i][0];
            }
            if(i!=0 && arrays[i][m-1] - mini > prev_diff){
                prev_diff=arrays[i][m-1]-mini;
            }
            maxi=max(maxi,arrays[i][m-1]);
            mini=min(mini,arrays[i][0]);
        }
        return prev_diff;
    }
};