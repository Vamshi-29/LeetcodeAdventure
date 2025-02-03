class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxlen = 1;
        int i = 0;
        while(i<nums.size())
        {
            while(i<nums.size()-1 && nums[i] == nums[i+1])
            i++;
            int inclen = 1;
            while(i<nums.size()-1 && nums[i] < nums[i+1])
            {
                inclen++;
                i++;
            }
            int declen = 1;
            int flag = 0; 
            while(i<nums.size()-1 && nums[i] > nums[i+1])
            {
                flag = 1; 
                declen ++ ;
                i++;
            }
            if(flag==0)
            i++;
            maxlen=max(maxlen,max(inclen,declen));
        }
        return maxlen;
    }
};