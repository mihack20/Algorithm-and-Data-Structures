/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head||!head->next)return head;
        ListNode* curr=new ListNode(0);
        curr->next=head;
        ListNode *ans=curr;
        while(curr&&curr->next&&curr->next->next){
            ListNode* tmp = curr->next;
            curr->next=curr->next->next;
            tmp->next=curr->next->next;
            curr->next->next=tmp;
            curr=curr->next->next;
        }
        return ans->next;
    }
};
