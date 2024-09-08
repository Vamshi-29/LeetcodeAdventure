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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* next1;
        int cnt=0;
        while(temp){
            temp=temp->next;
            cnt++;
        }
        temp=head;
        int each_part=cnt/k;
        int extra=cnt%k;
        if(cnt<k){
        extra=0;
        each_part=1;
        }
        cnt=0;
        int flag=1;
        vector<ListNode*>ans;
        while(temp){
            if(flag==1){
                ans.push_back(temp);
                flag=0;
            }
            cnt++;
            if(cnt==each_part){
                cout<<temp->val<<endl;
                cnt=0;
                if(extra)
                {
                    temp=temp->next;
                    extra--;
                }
                flag=1;
                next1=temp->next;
                temp->next=nullptr;
                temp=next1;
            }else
            temp=temp->next;
        }
        while(ans.size()!=k){
            ans.push_back(nullptr);
        }
        return ans;
    }
};