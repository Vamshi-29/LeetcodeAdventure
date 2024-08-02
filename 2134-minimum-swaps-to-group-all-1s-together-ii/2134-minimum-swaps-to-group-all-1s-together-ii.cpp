class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int onecnt = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i]) onecnt++;
        }
        int start = 0, bwone = 0, minswap = INT_MAX;

        for (int end = 0; end < 2 * n; end++) {
            if (nums[end % n]) bwone++;
            if (end - start + 1 == onecnt) {
                minswap = min(minswap, onecnt - bwone);
                bwone -= nums[start % n];
                start++;
            }
        }
        return minswap;
    }
};
