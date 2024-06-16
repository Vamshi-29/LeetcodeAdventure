class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        unordered_map<int,int>um;
        int n=hours.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
           int ele=hours[i];
           int rem=(ele)%24;
           int req=abs(24-rem)%24;
           if(um.find(req)==um.end())
           {
                um[rem]++;
           }
           else
           {
                cnt=cnt+um[req];
                um[rem]++;
           }
        }
        return cnt;   
    }
};