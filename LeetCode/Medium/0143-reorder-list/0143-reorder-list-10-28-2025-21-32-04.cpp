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
    void reorderList(ListNode* head) {
       if(!head||!head->next)return;
       ListNode*slow=head,*fast=head;
       while(fast->next&&fast->next->next){
        slow=slow->next;
        fast=fast->next->next;
       } 
       ListNode*prev=nullptr,*curr=slow->next,*next=nullptr;
       while(curr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
       }
       slow->next=nullptr;
       ListNode*first=head,*second=prev;
       while(second){
        ListNode*tmp1=first->next;
        ListNode*tmp2=second->next;
        first->next=second;
        second->next=tmp1;
        first=tmp1;
        second=tmp2;
       }
    }
};