class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        long long n=nums.size(),cnt=0;
        priority_queue <long long, vector<long long>, greater<long long>> minh;
        for(int i=0;i<n;i++)
        {
            
                minh.push(nums[i]);
            
        }
        while(minh.top()<k)
        {
            long long a=minh.top();
            minh.pop();
            long long b=minh.top();
            minh.pop();
            long long ans=(1LL)*min(a,b)*2+max(a,b);
                minh.push(ans);
            cnt++;
        }
        return cnt;
    }
};