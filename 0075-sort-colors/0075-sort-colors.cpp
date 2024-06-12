class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start=0,end=nums.size()-1;
        int n=end+1;
        int i=0;
        while(i<n)
        {
            if(nums[i]==0)
            {
                swap(nums[i],nums[start]);
                start++;
                i++;
            }
            else if(nums[i]==2 && end>=i)
            {
                swap(nums[i],nums[end]);
                end--;
            }
            else
            i++;
        }

    }
};