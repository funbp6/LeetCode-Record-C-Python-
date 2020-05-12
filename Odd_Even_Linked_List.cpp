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
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head -> next) return head;
        
        ListNode *slow = head, *fast = head -> next;
        int fastindex = 1;
        
        while(fast && fast -> next){
            ListNode* swap = fast -> next;
            fast -> next = fast -> next -> next;
            swap -> next = slow -> next;
            slow -> next = swap;
            slow = slow -> next;
            fast = fast -> next;
        }
        return head;
    }

};