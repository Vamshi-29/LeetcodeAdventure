class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fivecnt=0,tencnt=0,twentycnt=0;
        int n=bills.size();
        for(int i=0;i<n;i++)
        {
            if(bills[i]==5)
            fivecnt++;
            else if(bills[i]==10)
            {
                if(fivecnt > 0)
                {
                    fivecnt--;
                    tencnt++;
                }
                else
                return false;
            }
            else{
                twentycnt++;
                if( (fivecnt > 0 && tencnt > 0))
                {
                    fivecnt--;
                    tencnt--;
                }
                else if(fivecnt >=3)
                {
                    fivecnt=fivecnt-3;
                }
                else
                return false;
            }
        }
        return true;
    }
};