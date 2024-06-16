class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long long currentSum = 1;
        int patchesNeeded = 0;
        int index = 0;

    while (currentSum <= n) {
        if (index < nums.size() && nums[index] <= currentSum) {
        currentSum += nums[index];
        index++;
        } else {
        currentSum += currentSum;
        patchesNeeded++;
    }
    }   
    return patchesNeeded;
    }
};