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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return NULL;
        
        unordered_set<ListNode*> nodeset;
        while(headA){
            nodeset.insert(headA);
            headA = headA -> next;
        }
        while(headB){
            unordered_set<ListNode*>:: const_iterator it = nodeset.find(headB);
            if (it != nodeset.end())
                return *it;
            headB = headB -> next;
        }
        
        return NULL;
    }
};