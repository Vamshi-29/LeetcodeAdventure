class Solution {
public:
    int minBitFlips(int start, int goal) {
        int cnt=0;
        for(int i=0;i<=31;i++)
        {
            int bit1=start&(1<<i);
            int bit2=goal&(1<<i);
            if(bit1!=bit2)
            cnt++;
        }
        return cnt;
    }
};