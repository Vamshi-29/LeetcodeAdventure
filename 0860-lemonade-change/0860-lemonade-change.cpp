class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        int fivecnt=0,tencnt=0,twentycnt=0;
        for(int i=0;i<n;i++)
        {
            if(bills[i]==5)
            {
                fivecnt++;
            }
            else if(bills[i]==10)
            {
                if(!fivecnt)
                return false;
                fivecnt--;
                tencnt++;
            }
            else
            {
                twentycnt++;
                if(tencnt)
                {
                    tencnt--;
                    if(fivecnt)
                    fivecnt--;
                    else
                    return false;
                }
                else 
                {
                    if(fivecnt>=3)
                    fivecnt=fivecnt-3;
                    else
                    return false;
                }
            }
        }
        return true;
    }
};