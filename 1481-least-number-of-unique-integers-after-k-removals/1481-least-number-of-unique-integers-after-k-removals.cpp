class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>um;
        int n=arr.size();
        for(int i=0;i<n;i++)
        um[arr[i]]++;
        vector<int>freq;
        for(auto i:um)
        {
            freq.push_back(i.second);
        }
        sort(freq.begin(),freq.end());
        int n1=freq.size(),cnt=0;
        for(int i=0;i<n1;i++)
        {
            if(k<=0)
            return n1-cnt;
            else if(k>=freq[i])
            {
                cnt++;
                k=k-freq[i];
            }
        }
        return n1-cnt;
    }
};