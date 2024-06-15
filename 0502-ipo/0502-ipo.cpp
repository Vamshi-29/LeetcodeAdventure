class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n=profits.size();
        vector<pair<int,int>>arr;
        for(int i=0;i<n;i++)
        {
            arr.push_back({capital[i],profits[i]});
        }
        sort(arr.begin(),arr.end());
        priority_queue<int>pq;
        int i=0,ans=w;
        for(int j=0;j<k;j++)
        {
            while(i<n && arr[i].first<=ans)
            {
                pq.push(arr[i].second);
                i++;
            }
            if(pq.empty())
            break;
            ans=ans+pq.top();
            pq.pop();
        }
        return ans;
        
    }
};