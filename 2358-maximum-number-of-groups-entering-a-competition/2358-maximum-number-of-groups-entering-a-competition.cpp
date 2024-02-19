class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int n=grades.size();
        sort(grades.begin(),grades.end());
        int sum=grades[0];
        int temp=1,cnt=1,locsum=0;
        int loccnt=0;
        for(int i=1;i<n;i++)
        {
            locsum+=grades[i];
            loccnt++;
            if(loccnt > temp && locsum > sum)
            {
                sum=locsum;
                locsum=0;
                temp=loccnt;
                loccnt=0;
                cnt++;
            }
        }
        return cnt;
    }
};