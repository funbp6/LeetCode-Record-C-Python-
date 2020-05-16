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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head) return NULL;
        
        int movelen = 0;
        ListNode* cur = head;
        
        while(cur -> next){
            movelen++;
            cur = cur -> next;
        }
        movelen++;
        
        if (k % movelen == 0) return head;
        
        movelen -= k % movelen;
        
        ListNode *l1last = head, *l2first = NULL;
        
        for (int i = 0; i < movelen-1; i++){
            l1last = l1last -> next;
        }
        l2first = l1last -> next;
        
        cur -> next = head;
        l1last -> next = NULL;
        
        return l2first;
    }
};