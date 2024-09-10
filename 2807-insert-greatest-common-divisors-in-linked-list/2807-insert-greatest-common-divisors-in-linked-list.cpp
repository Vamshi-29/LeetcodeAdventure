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
    int gcd(int num1,int num2)
    {
        if(num2==0)
        return num1;
        return gcd(num2,num1%num2);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr=head;
        ListNode* newhead=head;
        ListNode* nextval=nullptr;
        while(curr)
        {
            nextval=curr->next;
            if(!nextval)
            return newhead;
            int num1=curr->val,num2=nextval->val;
            int ans=gcd(num1,num2);
            ListNode* newnod=new ListNode(-1);
            newnod->val=ans;
            curr->next=newnod;
            newnod->next=nextval;
            curr=nextval;
        }
        return newhead;
    }
};