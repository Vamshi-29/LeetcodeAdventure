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
    unordered_set<int>st;
    bool getans(TreeNode* root,int k)
    {
        if(!root)
        return false;
        if(st.find(k-root->val)!=st.end())
        return true;
        st.insert(root->val);
        return getans(root->right,k) || getans(root->left,k);
    }
    bool findTarget(TreeNode* root, int k) {
        return getans(root,k);
    }
};