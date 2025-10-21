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
   struct compare {
        bool operator()(const ListNode* a, const ListNode* b) {
            return a->val > b->val;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, compare> pq;
        for (ListNode* list : lists) {
            if (list != nullptr) {
                pq.push(list);
            }
        }
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;
        while (!pq.empty()) {
            current->next = pq.top();
            pq.pop();
            current = current->next;
            if (current->next != nullptr) {
                pq.push(current->next);
            }
        }
        return dummy->next;
    }
};