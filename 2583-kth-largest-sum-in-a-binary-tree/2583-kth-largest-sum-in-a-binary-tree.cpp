class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        if (!root) return -1;  

        queue<TreeNode*> qu;
        qu.push(root);
        priority_queue<long long> pq;  

        while (!qu.empty()) {
            int size = qu.size();
            long long sum = 0;  

            for (int i = 0; i < size; i++) {
                TreeNode* currNode = qu.front();
                sum += currNode->val;
                qu.pop();
                if (currNode->left) qu.push(currNode->left);
                if (currNode->right) qu.push(currNode->right);
            }
            pq.push(sum);  
        }

        
        if (pq.size() < k) return -1;

        
        for (int i = 1; i < k; i++) {
            pq.pop();
        }

        return pq.top();  
    }
};