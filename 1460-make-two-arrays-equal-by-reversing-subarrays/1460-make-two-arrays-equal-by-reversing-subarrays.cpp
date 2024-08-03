class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int>um;
        int n1=target.size();
        int n2=arr.size();
        for(int i=0;i<n1;i++)
        {
            um[target[i]]++;
        }
        for(int i=0;i<n2;i++)
        {
            um[arr[i]]--;
        }
        for(auto it:um)
        {
            if(it.second)
            return false;
        }
        return true;
    }
};