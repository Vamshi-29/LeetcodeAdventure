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
    vector<int>ans;
    void traversal(TreeNode* root)
    {
       if(root){
        traversal(root->left);
        ans.push_back(root->val);
        traversal(root->right);
       }
    }
    TreeNode* buildbalanced(int start,int end)
    {
        if(start>end)
        return nullptr;
        int mid=(start+end)/2;
        TreeNode* node=new TreeNode(ans[mid]);
        node->left=buildbalanced(start,mid-1);
        node->right=buildbalanced(mid+1,end);
        return node;
    }
    TreeNode* balanceBST(TreeNode* root) {
        traversal(root);
        return buildbalanced(0,ans.size()-1);
    }
};