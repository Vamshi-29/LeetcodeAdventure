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
    TreeNode* lca(TreeNode* root,TreeNode* node1,TreeNode *node2)
    {
        if(root==nullptr || root==node1 || root==node2)
        return root;
        
        TreeNode* posi1=lca(root->left,node1,node2);
        TreeNode* posi2=lca(root->right,node1,node2);

        if(posi1==nullptr)
        return posi2;
        if(posi2==nullptr)
        return posi1;
        return root;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return lca(root,p,q);   
    }
};