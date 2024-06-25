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
    int ans=0;
    void getsol(TreeNode* root,int k,int &cnt)
    {
        if(root==nullptr)
        return ;
        getsol(root->left,k,cnt);
        cnt++;
        if(cnt==k){
        ans=root->val;
        return ;
        }
        getsol(root->right,k,cnt);
        return ;
    }
    int kthSmallest(TreeNode* root, int k) {
        int cnt=0;
        getsol(root,k,cnt);
        return ans;
    }
};