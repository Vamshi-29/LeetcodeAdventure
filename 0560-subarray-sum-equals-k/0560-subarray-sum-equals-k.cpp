class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0, cnt = 0;
        unordered_map<int, int> um;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            if (sum == k) {
                cnt++;
            }
            if (um.find(sum - k) != um.end()) {
                cnt += um[sum - k];
            }
            um[sum]++;
        }

        return cnt;
    }
};