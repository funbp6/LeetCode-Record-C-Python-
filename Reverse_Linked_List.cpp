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
    ListNode* reverseList(ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        if (!head || !head -> next) return head;
        
        
        ListNode* cur = head;
        while(cur -> next -> next){
            ListNode* curn = cur -> next;
            cur -> next = cur -> next -> next;
            curn -> next = head;
            head = curn;
            
        }
        
        cur -> next -> next = head;
        head = cur -> next;
        cur -> next = NULL;

        
        
//         while(head){
//             cout << head -> val;
//             head = head -> next;
//         }cout << '\n' << cur -> val;
     return head;   
    }
};