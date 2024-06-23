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
    bool getsol(TreeNode* node1,TreeNode* node2)
    {
        if(node1==nullptr && node2==nullptr)
        return true;
        if(node1==nullptr || node2==nullptr)
        return false;
        if(node1->val != node2->val)
        return false;
    
        bool ans1=getsol(node1->left,node2->right);
        bool ans2=getsol(node1->right,node2->left);
        return ans1 && ans2;

    }
    bool isSymmetric(TreeNode* root) {
        return getsol(root->left,root->right);
    }
};