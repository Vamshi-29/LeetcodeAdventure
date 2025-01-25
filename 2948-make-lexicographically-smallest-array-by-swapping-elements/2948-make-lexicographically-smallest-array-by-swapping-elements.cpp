class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        int n = nums.size();
        vector<pair<int, int>> indexedNums;
        
        // Store elements along with their indices
        for (int i = 0; i < n; i++) {
            indexedNums.push_back({nums[i], i});
        }
        
        // Sort elements based on their values
        sort(indexedNums.begin(), indexedNums.end());
        
        vector<int> result(n);
        vector<bool> visited(n, false);
        
        for (int i = 0; i < n; i++) {
            if (visited[i]) continue;
            
            vector<int> indices, values;
            int j = i;
            
            // Group numbers that can be swapped
            while (j < n && (indices.empty() || indexedNums[j].first - indexedNums[j - 1].first <= limit)) {
                indices.push_back(indexedNums[j].second);  // Store original index
                values.push_back(indexedNums[j].first);    // Store value
                visited[j] = true;
                j++;
            }
            
            // Sort indices to place values correctly
            sort(indices.begin(), indices.end());
            
            // Assign values in lexicographic order
            for (int k = 0; k < indices.size(); k++) {
                result[indices[k]] = values[k];
            }
        }
        
        return result;
    }
};
