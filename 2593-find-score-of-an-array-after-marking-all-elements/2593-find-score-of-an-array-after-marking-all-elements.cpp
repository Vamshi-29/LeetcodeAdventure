class Solution {
public:
    long long findScore(vector<int>& nums) {
    // Step 1: Create an ordered map of int and vector<int>
    map<int, vector<int>> mp;

    // Step 2: Traverse through the array and store its elements in the map
    for (int i = 0; i < nums.size(); i++) {
        mp[nums[i]].push_back(i);
    }

    // Step 3: Traverse the map and calculate the sum
    long long totalSum = 0;
    vector<bool> visited(nums.size(), false); // To mark visited indices

    for (auto& it : mp) {
        for (int index : it.second) {
            // If the current index is not visited
            if (!visited[index]) {
                totalSum += it.first; // Add the value to the sum

                // Mark this index and its adjacent indices as visited
                visited[index] = true;
                if (index > 0) visited[index - 1] = true;
                if (index < nums.size() - 1) visited[index + 1] = true;
            }
        }
    }

    // Step 4: Return the total sum
    return totalSum;
}
};