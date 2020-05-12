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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head -> next == NULL) return NULL;
        ListNode* dummy = new ListNode(0);
        dummy -> next = head;
        ListNode *prev = dummy, *tail = dummy;
        while(n){
            tail = tail -> next;
            n--;
        }
        while(tail -> next){
            tail = tail -> next;
            prev = prev -> next;
        }
        
        ListNode* del = prev -> next;
        prev -> next = prev -> next -> next;
        delete del;
        
        return dummy -> next;
    }
};