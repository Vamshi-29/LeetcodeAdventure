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
    vector<int> rightSideView(TreeNode* root) {
        if (!root) return {};
        
        queue<pair<TreeNode*, int>> todo;
        map<int, int> mp;
        todo.push({root, 0});
        
        while (!todo.empty()) {
            auto it = todo.front();
            todo.pop();
            
            TreeNode* node = it.first;
            int level = it.second;
            if(mp.find(level)==mp.end())
            mp[level] = node->val;
            if (node->right) {
                todo.push({node->right, level + 1});
            }
            if (node->left) {
                todo.push({node->left, level + 1});
            }
           
        }
        
        vector<int> ans;
        for (auto it : mp) {
            ans.push_back(it.second);
        }
        
        return ans;
    }
};
