class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n=capacity.size(),cnt=0;
        vector<int>current(n);
        for(int i=0;i<n;i++)
        {
            current[i]=(capacity[i]-rocks[i]);
        }
        sort(current.begin(),current.end());
        int i=0;
        while(additionalRocks > 0 && i < n)
        {
            if(additionalRocks >= current[i]){
            cnt++;
            additionalRocks-=current[i];
            }
            else
            return cnt;
            i++;
        }
        return cnt;
    }
};