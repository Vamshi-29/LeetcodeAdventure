class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=customers.size();
        int start=0,end=0;
        int sum=0,maxsum=0,secsum=0;
        while(end<n){
            if(grumpy[end]==0)
            {
                sum=sum+customers[end];
            }
            else{
                secsum=secsum+customers[end];
            }
            if(end-start+1==minutes)
            {
                maxsum=max(maxsum,secsum);
                if(grumpy[start]==1)
                {
                    secsum=secsum-customers[start];
                }
                start++;
            }
            end++;
        }
        return sum+maxsum;
    }
};