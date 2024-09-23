class Solution {
public:
    bool isHappy(int n) {
        while(n>10)
        {
            int sum=0;
            while(n)
            {
                sum=sum+(n%10)*(n%10);
                n=n/10;
            }
            n=sum;
        }
        if(n==1)
        return true;
        return false;   
    }
};