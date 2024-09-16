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
        int fans=INT_MAX;
        for(int i=1;i<n;i++)
        {
            int diff1=abs(ans[i]-ans[i-1]);
            int diff2=abs(ans[i-1]-ans[i]);
            int mindiff=min(diff1,diff2);
            fans=min(fans,mindiff);
        }
        return fans;

    }
};