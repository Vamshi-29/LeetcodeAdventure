/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* replaceValueInTree(TreeNode* root) {
        if (!root) return nullptr;

        queue<TreeNode*> nodes;
        int prevSum = root->val;
        nodes.push(root);

        while (!nodes.empty()) {
            int levelSize = nodes.size();
            int currSum = 0;

            for(int i=0;i<levelSize;i++) {
                TreeNode* node = nodes.front();
                nodes.pop();

                int sumChildren = (node->left ? node->left->val : 0) + (node->right ? node->right->val : 0);

                if (node->left) {
                    node->left->val = sumChildren;
                    nodes.push(node->left);
                }

                if (node->right) {
                    node->right->val = sumChildren;
                    nodes.push(node->right);
                }

                currSum += sumChildren;
                node->val = prevSum - node->val;
            }

            prevSum = currSum;
        }

        return root;
    }
};
