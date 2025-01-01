class Solution {
public:
    int maxScore(string s) {
        int totzeros=0;
        int totones=0;
        for(auto it:s)
        {
            if(it=='0')
            totzeros++;
            else
            totones++;
        }
        int maxans=0,curzero=0,curone=0;
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]=='0')
            curzero++;
            else
            curone++;
            int sum = curzero + totones - curone ;
            cout<<sum<<" "<<i<<endl;
            maxans=max(maxans , sum);
        }
        return maxans;
    }
};