class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
    unordered_map<int, int> um;
    int cnt = 0;
    
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            int pro = nums[i] * nums[j];
            if (um.find(pro) != um.end()) {
                cnt += um[pro] * 8; 
            }
            um[pro]++;
        }
    }

    return cnt;
    }
};