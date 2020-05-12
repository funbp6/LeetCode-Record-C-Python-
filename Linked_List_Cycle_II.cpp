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
    ListNode *detectCycle(ListNode *head) {
        if (!head || !head -> next) return NULL; 
        unordered_map<ListNode*, int> nodeset;
        
        int index = 0;
        while(head){
            unordered_map<ListNode*, int>::iterator it = nodeset.find(head);  
            if( it != nodeset.end())
                return it -> first;
            nodeset.insert({head, index});
            head = head -> next;
            index++;
            
        }
    return NULL;
    }
};