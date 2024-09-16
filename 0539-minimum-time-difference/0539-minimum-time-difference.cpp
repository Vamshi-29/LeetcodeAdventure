class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>ans;
        int n=timePoints.size();

        for(int i=0;i<n;i++)
        {
            int hrs=stoi(timePoints[i].substr(0,2))*60;
            if(hrs==0)
            hrs=24*60;
            int minutes=stoi(timePoints[i].substr(3,2));
            int total=hrs+minutes;
            ans.push_back(total);
        }
        sort(ans.begin(),ans.end());
        for(auto it:ans)
        cout<<it<<" ";
        int fans=INT_MAX;
        for(int i=1;i<n;i++)
        {
            int diff1=abs(ans[i]-ans[i-1]);
            fans=min(fans,diff1);
        }
        return min(fans, abs(ans[n - 1] - (ans[0] + 1440)));

    }
};