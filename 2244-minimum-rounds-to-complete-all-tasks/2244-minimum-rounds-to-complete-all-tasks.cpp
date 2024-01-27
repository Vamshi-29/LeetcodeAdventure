class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>um;
        int n=tasks.size();
        for(int i=0;i<n;i++)
        {
            um[tasks[i]]++;
        }
        int cnt=0;
        for(auto i:um)
        {
            if(i.second==1)
            return -1;
            else
            {
                if(i.second % 3==0)
                {
                    cnt=cnt+(i.second/3);
                }
                else
                {
                    cnt=cnt+(i.second/3)+1;
                }
            }
        }
        return cnt;
    }
};