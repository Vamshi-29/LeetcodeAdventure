/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* getans(TreeNode* root,TreeNode* p,TreeNode* q)
    {
        if(root==nullptr || root==p || root==q)
        return root;

        TreeNode* node1=getans(root->left,p,q);
        TreeNode* node2=getans(root->right,p,q);
        if(node1==nullptr)
        return node2;
        else if(node2==nullptr)
        return node1;
        else 
        return root;

    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // brute force will be take 2 arrays store elements of paths of p & q into it and find the last common element
        // optimal
        return getans(root,p,q);
    }
};