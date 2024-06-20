class Solution {
public:
    int getans(vector<int>&position,int mid,int m)
    {
        int n=position.size();
        int cnt=1;
        int lastposi=0;
        for(int i=1;i<n;i++)
        {
            if(position[i]-position[lastposi]>=mid)
            {
                cnt++;
                lastposi=i;
            }
        }
        return (cnt>=m);
    }
    int maxDistance(vector<int>& position, int m) {
        int n=position.size();
        sort(position.begin(), position.end());
        int start=1;
        int end = position[n-1]-position[0];
        int ans=0;
        while(start<=end)
        {
            int mid=(start+end)/2;
            int possians=getans(position,mid,m);
            if(possians)
            {
                ans=mid;
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return ans;
    }
};