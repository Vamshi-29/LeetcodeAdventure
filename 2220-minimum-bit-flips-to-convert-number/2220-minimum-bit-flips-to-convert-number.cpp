class Solution {
public:
    int minBitFlips(int start, int goal) {
        int cnt=0;
        while(goal)
        {
            int bit1=start&1;
            int bit2=goal&1;
            if(bit1!=bit2)
            {
                cnt++;
            }
            start=start>>1;
            goal=goal>>1;
        }
        while(start)
        {
            cnt++;
            start=start>>1;
        }
        return cnt;
    }
};