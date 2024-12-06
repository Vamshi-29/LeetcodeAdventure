class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int cnt=0,sum=0;
        unordered_map<int,int>um;
        for(auto it:banned)
        um[it]++;
        for(int i=1;i<=n;i++)
        {
            if(um.find(i)==um.end())
            {
                if(sum+i > maxSum)
                return cnt;
                sum=sum+i;
                cnt++;
            }
        }
        return cnt;
    }
};