class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mp;
        int n=arr1.size();
        for(int i=0;i<n;i++)
        mp[arr1[i]]++;
        int m=arr2.size();
        int index=0;
        for(int i=0;i<m;i++)
        {
            if(mp.find(arr2[i])!=mp.end())
            {
                int ele=arr2[i];
                int freq=mp[arr2[i]];
                for(int j=0;j<freq;j++)
                {
                    arr1[index]=ele;
                    index++;
                }
                mp[arr2[i]]=0;
            }
        }
        for(auto i:mp)
        {
            if(i.second==0)
            continue;
            else
            {
                int freq=i.second;
                for(int j=0;j<freq;j++)
                {
                    arr1[index]=i.first;
                    index++;
                }
            }
        }
        return arr1;
    }
};