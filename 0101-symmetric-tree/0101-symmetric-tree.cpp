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
    bool check(TreeNode *leftie, TreeNode *rightie) {
        if (leftie == nullptr && rightie == nullptr)
            return true;
        if (leftie == nullptr || rightie == nullptr)
            return false;
        if (leftie->val != rightie->val)
            return false;
        bool left1 = check(leftie->left, rightie->right);
        bool right1 = check(leftie->right, rightie->left);
        return left1 && right1;
    }

    bool isSymmetric(TreeNode* root) {
        if (root == nullptr)
            return true;
        return check(root->left, root->right);
    }
};
