class Solution {
public:
    static bool compare(int a,int b)
    {
        string a1=to_string(a);
        string a2=to_string(b);
        if(a1+a2 > a2+a1)
        return true;
        return false;
    }
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),compare);
        string fans;
        if(nums[0]==0)
        return "0";
        for(auto it:nums)
        {
            fans=fans+to_string(it);
        }
        return fans;
    }
};