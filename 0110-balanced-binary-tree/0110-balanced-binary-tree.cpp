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
    int check=1;
    int getans(TreeNode* root)
    {
        if(!root)
        return 0;
        int left=1+getans(root->left);
        int right=1+getans(root->right);
        if(abs(left-right)>1)
        check=0;
        return max(left,right);
    }
    bool isBalanced(TreeNode* root) {
        getans(root);
        return check;
    }
};