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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode*>qu;
        qu.push(root);
        if(root==nullptr)
        return -1;
        priority_queue<int>pq;
        pq.push(root->val);
        while(!qu.empty())
        {
            int size=qu.size();
            int sum=0;
            for(int i=0;i<size;i++)
            {
            TreeNode* currnode=qu.front();
            sum+=currnode->val;
            qu.pop();
            if(currnode->left!=nullptr)
            {
                qu.push(currnode->left);
            }
            if(currnode->right!=nullptr)
            {
                qu.push(currnode->right);
            }
            }
            pq.push(sum);
        }
        int size=pq.size();
        if(size < k)
        return -1;
        for(int i=1;i<k;i++)
        pq.pop();
        return pq.top();
    }
};