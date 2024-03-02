class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int end=n-1;
        int start1=0,start2=n-1;
        while(end>=0)
        {
            int num1=nums[start1]*nums[start1];
            int num2=nums[start2]*nums[start2];
            if(num1>num2)
            {
                ans[end]=num1;
                start1++;
            }
            else
            {
                ans[end]=num2;
                start2--;
            }
            end--;
        }
        return ans;
    }
};