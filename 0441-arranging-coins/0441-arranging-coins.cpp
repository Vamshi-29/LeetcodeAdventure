class Solution {
public:
    int arrangeCoins(int n) {
        long long start=1,end=n;
        long long result=0;
        while(start<=end)
        {
            long long mid=start+(end-start)/2;
            long long ans=mid*(mid+1)/2;
            if(ans==n)
            return mid;
            else if(ans>n)
            {
                end=mid-1;
            }
            else
            {
                result=mid;
                start=mid+1;
            }
        }
        return result;
    }
};