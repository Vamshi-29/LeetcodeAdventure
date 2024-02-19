class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int n=grades.size();
        sort(grades.begin(),grades.end());
        int sum=grades[0];
        int temp=1,cnt=1,locsum=0;
        vector<int>loctemp;
        for(int i=1;i<n;i++)
        {
            locsum+=grades[i];
            loctemp.push_back(grades[i]);
            if(loctemp.size() > temp && locsum > sum)
            {
                sum=locsum;
                locsum=0;
                temp=loctemp.size();
                loctemp.clear();
                cnt++;
            }
        }
        return cnt;
    }
};