class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end(),greater<int>());
        int n=people.size();
        int start=0,end=n-1;
        int cnt=0;
        while(start<=end)
        {
            int check=people[start]+people[end];
            if(check<=limit)
            {
                start++;
                end--;
            }
            else
            {
                start++;
            }
            cnt++;
        }
        return cnt;
    }
};