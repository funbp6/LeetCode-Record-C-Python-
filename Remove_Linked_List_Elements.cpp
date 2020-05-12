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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return NULL;

        ListNode* prev = head;
        while(prev -> next != NULL){
            if (prev -> next -> val == val){
                ListNode* del = prev -> next;
                prev -> next = prev -> next -> next;
                delete del;
            }
            else prev = prev -> next;
        }
        if (head -> val == val){
            ListNode* del = head;
            head = head -> next;
            delete del;
        }
        return head;
        
    }
};