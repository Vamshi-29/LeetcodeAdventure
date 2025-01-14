class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        unordered_map<int, int> um; // Map to track frequencies
        vector<int> result(n, 0);  // Initialize result with size n and values 0
        int commonCount = 0;       // Counter for common elements

        for (int i = 0; i < n; i++) {
            um[A[i]]++;
            um[B[i]]++;

            if (um[A[i]] == 2) {
                commonCount++;
            }

            // If B[i] is seen in both arrays (but avoid double counting if A[i] == B[i])
            if (A[i] != B[i] && um[B[i]] == 2) {
                commonCount++;
            }

            // Update the prefix common count
            result[i] = commonCount;
        }

        return result;
    }
};