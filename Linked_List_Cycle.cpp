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
    bool hasCycle(ListNode *head) {
        if(!head || !head -> next) return false;
        
        unordered_set<ListNode*> nodeset;
        while (head){
            if(nodeset.find(head) ==  nodeset.end()){
                nodeset.insert(head);
            }else return true;
            head = head -> next;
        }
        return false;
    }
};