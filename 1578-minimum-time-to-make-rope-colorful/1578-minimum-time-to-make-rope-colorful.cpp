class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n=colors.length(),result=0;
        for(int i=0;i<n;)
        {
            int j=i;
            int mini=INT_MIN;
            int sum=0;
            while(colors[j]==colors[j+1] && j < n-1)
            {
                cout<<"HERE"<<i<<endl;
                mini=max(neededTime[j],mini);
                sum=sum+neededTime[j];
                j++;
            }
            if(sum!=0)
            {
                mini=max(neededTime[j],mini);
                sum=sum+neededTime[j];
                result=result+(sum-mini);
            }
            i=j+1;
        }
        return result;
    }
};