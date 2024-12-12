class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>pq;
        for(auto it:gifts)
        pq.push(it);
        for(int i=0;i<k;i++)
        {
            int top=pq.top();
            pq.pop();
            top=floor(sqrt(top));
            pq.push(top);
        }
        int sum=0;
        while(!pq.empty())
        {
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};