class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int>s;
        int n=temp.size();
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() && temp[i] >= temp[s.top()] )
            {
                s.pop();
            }
            if(!s.empty() && temp[s.top()] > temp[i])
            ans[i]=(s.top()-i);
            else
            ans[i]=0;
            s.push(i);
        }
        return ans;
    }
};