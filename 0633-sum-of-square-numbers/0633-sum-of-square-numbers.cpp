class Solution {
public:
    bool judgeSquareSum(int c) {
        int start=0;
        int end=sqrt(c);
        while(start<=end)
        {
            long long int ans=(start*start)+(end*end);
            if(ans==c)
            return true;
            if(ans>c)
            end=end-1;
            else
            start=start+1;
        }
        return false;
    }
    
};