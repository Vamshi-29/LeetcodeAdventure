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
    ListNode* reverseKGroup(ListNode* head, int k) {
       if (!head || k == 1) return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prevGroupEnd = dummy;

        while (true) {
            ListNode* curr = prevGroupEnd;
            for (int i = 0; i < k; i++) {
                curr = curr->next;
                if (!curr) return dummy->next; 
            }

            ListNode* prev = nullptr;
            ListNode* currHead = prevGroupEnd->next;
            ListNode* nextNode = nullptr;
            curr = currHead;

            for (int i = 0; i < k; i++) {
                nextNode = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nextNode;
            }

            prevGroupEnd->next = prev;
            currHead->next = curr;
            prevGroupEnd = currHead;
        }
    }
};