class Solution {
    public int[] getMaximumXor(int[] nums, int maximumBit) {
        int maxnumber = (1 << maximumBit) - 1; 
        
        int n = nums.length;
        int ans = 0;
        int[] result = new int[n];
        
        
        for (int num : nums) {
            ans ^= num;
        }
        
        
        for (int i = 0; i < n; i++) {
            result[i] = ans ^ maxnumber; 
            ans ^= nums[n - i - 1];      
        }
        
        return result;
    }
}
