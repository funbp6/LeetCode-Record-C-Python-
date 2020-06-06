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
    ListNode* swapPairs(ListNode* head) {
        if (!head) return {};
        if (!head -> next) return head;
        
        ListNode* tmp = new ListNode();
        
        ListNode* newhead = new ListNode(0, head);
        ListNode* cur = newhead;
        
        while(cur -> next && cur -> next -> next){
            tmp -> next = cur -> next;
            cur -> next = cur -> next -> next;
            tmp -> next -> next = cur -> next -> next;
            cur -> next -> next = tmp -> next;
            // cout << cur -> val;
            if (cur -> next -> next)
                cur = cur -> next -> next;
        }
        return newhead -> next;
    }
    
};