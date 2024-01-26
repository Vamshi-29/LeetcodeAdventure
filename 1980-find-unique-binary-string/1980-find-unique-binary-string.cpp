class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums.size();
        int k=0;
        string ans;
        for(int i=0;i<n;i++)
        {
            if(nums[i][k]=='0')
            ans+='1';
            else
            ans+='0';
            k++;
        }
        return ans;
    }
};