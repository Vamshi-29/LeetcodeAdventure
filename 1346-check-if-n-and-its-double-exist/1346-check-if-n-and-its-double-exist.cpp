class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int>um;
        int n=arr.size();
        for(int i=0;i<n;i++)
        um[arr[i]]=i;
        for(int i=0;i<n;i++)
        {
            if(um.find(2*arr[i])!=um.end() && um[2*arr[i]]!=i)
            return true;
        }
        return false;
    }
};