class Solution {
public:
    bool isPerfectSquare(int num) {
        long start=1,end=num/2+1;
        while(start<=end)
        {
            long mid=(start)+(end-start)/2;
            long ans=mid*mid;
            if(ans==num)
            return true;
            if(ans>num)
            end=mid-1;
            else
            start=mid+1;
        }
        return false;
    }
};