class Solution {
public:
    int mySqrt(int x) {
        long long start=1,end=x/2+1,tempans=0;
        while(start<=end)
        {
            long long mid=start+(end-start)/2;
            long long ans=mid*mid;
            if(ans==x)
            {
                return mid;
            }
            if(ans>x)
            end=mid-1;
            else{
            tempans=mid;
            start=mid+1;
            }
        }
        return tempans;
    }
};