class NumberContainers {
    unordered_map<int, int> um1; // Maps index -> number
    unordered_map<int, std::priority_queue<int, std::vector<int>, std::greater<int>>> um; // Maps number -> min-heap of indexes

public:
    NumberContainers() {}

    void change(int index, int number) {
        if (um1.find(index) != um1.end()) {
            int prevNumber = um1[index];
            if (prevNumber == number) return; // No change needed
            
            // Remove index from the previous number's heap (Lazy deletion approach)
            // um[prevNumber].push(-index); // Use negative value as a marker for deletion
        }

        // Update mappings
        um1[index] = number;
        um[number].push(index);
    }

    int find(int number) {
        if (um.find(number) == um.end()) {
            return -1;
        }

        // Clean up any outdated values in the priority queue
        while (!um[number].empty() && um1[um[number].top()] != number) {
            um[number].pop();
        }

        return um[number].empty() ? -1 : um[number].top();
    }
};
