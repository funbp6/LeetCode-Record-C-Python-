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
    bool isPalindrome(ListNode* head) {
        ListNode* mid = findMiddle(head);
        ListNode* rhead = reverseList(mid);
        
        while(rhead){
            if (rhead -> val != head -> val) return false;
            rhead = rhead -> next;
            head = head -> next;
        }
        return true;
    }
    
    
    ListNode* findMiddle(ListNode* node){
        ListNode *slow = node, *fast = node;
        while(fast && fast -> next){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow;
    }
    
    ListNode* reverseList(ListNode* node){
        if (!node || !node -> next) return node;
        ListNode *prev = NULL, *cur = node;
        while (cur){
            ListNode* tmp = cur;
            cur = cur -> next;
            tmp -> next = prev;
            prev = tmp;
            
        }
        
        return prev;
    }
    
};