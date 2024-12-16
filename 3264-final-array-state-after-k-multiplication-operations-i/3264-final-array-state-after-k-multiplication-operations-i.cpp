class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
    int n = nums.size();
    for (int i = 0; i < k; i++) {
        
        int min_ind = 0;
        for (int j = 1; j < n; j++) {
            if (nums[j] < nums[min_ind]) {
                min_ind = j;
            }
        }
        nums[min_ind] *= multiplier;
    }
    return nums;
}
};