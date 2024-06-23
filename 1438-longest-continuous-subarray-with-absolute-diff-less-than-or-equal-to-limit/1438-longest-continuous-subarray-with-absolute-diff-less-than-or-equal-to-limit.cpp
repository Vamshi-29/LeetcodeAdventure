class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int n = nums.size();
        int start = 0, end = 0;
        int maxlen = 0;
        deque<int> maxis; 
        deque<int> minis; 
        
        while (end < n) {
            
            while (!maxis.empty() && nums[end] > maxis.back()) {
                maxis.pop_back();
            }
            maxis.push_back(nums[end]);
            
           
            while (!minis.empty() && nums[end] < minis.back()) {
                minis.pop_back();
            }
            minis.push_back(nums[end]);
            
           
            while (maxis.front() - minis.front() > limit) {
              
                if (nums[start] == maxis.front()) {
                    maxis.pop_front();
                }
                if (nums[start] == minis.front()) {
                    minis.pop_front();
                }
                start++;
            }
            
        
            maxlen = max(maxlen, end - start + 1);
            end++;
        }
        
        return maxlen;
    }
};
