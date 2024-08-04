class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>newarray;
        long long int mod=pow(10,9)+7;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=i;j<n;j++)
            {
                sum=sum+nums[j];
                newarray.push_back(sum);
            }
        }
        sort(newarray.begin(),newarray.end());
        for(auto it:newarray)
        cout<<it<<" ";
        int ans=0;
        for(int i=left-1;i<=right-1;i++)
        {
            ans=(ans+newarray[i])%mod;
        }
        return ans;
    }
};