class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m, vector<int>(n, -1)); 
        int top = 0, bottom = m - 1, left = 0, right = n - 1; 
        ListNode* temp = head;

        while (temp && top <= bottom && left <= right) {
            
            for (int col = left; col <= right && temp; col++) {
                ans[top][col] = temp->val;
                temp = temp->next;
            }
            top++; 

           
            for (int row = top; row <= bottom && temp; row++) {
                ans[row][right] = temp->val;
                temp = temp->next;
            }
            right--; 

            
            for (int col = right; col >= left && temp; col--) {
                ans[bottom][col] = temp->val;
                temp = temp->next;
            }
            bottom--; 

            
            for (int row = bottom; row >= top && temp; row--) {
                ans[row][left] = temp->val;
                temp = temp->next;
            }
            left++; 
        }

        return ans;
    }
};