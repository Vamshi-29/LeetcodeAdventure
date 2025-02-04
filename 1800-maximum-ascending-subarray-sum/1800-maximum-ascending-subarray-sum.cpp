class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int i = 0;
        int maxsum = 0;
        while(i<nums.size())
        {
            int sum = 0;
            while(i<nums.size()-1 && nums[i] < nums[i+1])
            {
                sum = sum + nums[i];
                i++;
            }
            sum = sum + nums[i];
            i++;
            maxsum = max(maxsum,sum);
        }

        return maxsum ;
    }
};