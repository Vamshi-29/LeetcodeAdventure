class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int>um;
        for(auto it:arr)
        {
            um[it]++;
        }
        for(auto it:arr)
        {
            if(it==0 && um[0]>=2)
            return true;
            if(um.find(2*it)!=um.end() && it!=0)
            return true;
        }
        return false;
    }
};