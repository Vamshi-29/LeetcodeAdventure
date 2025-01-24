/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
         if (!head || !head->next || k == 0) return head;

        int cnt = 1;  
        ListNode* tail = head;
        while (tail->next) {
            tail = tail->next;
            cnt++;
        }

        k = k % cnt;  // Only need to rotate `k % cnt` times
        if (k == 0) return head;  // No rotation needed

        // Step 3: Find the new tail (cnt - k - 1)th node
        ListNode* newTail = head;
        for (int i = 1; i < cnt - k; i++) {
            newTail = newTail->next;
        }

        // Step 4: Update head and break the list
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;
        tail->next = head;  // Connect old tail to old head

        return newHead;
    }
};