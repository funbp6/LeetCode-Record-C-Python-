class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum = 0;
        bool carry = false;
        ListNode *head = new ListNode(0);
        ListNode *tmp = head;
        
        while (l1 && l2){
            int cursum = l1 -> val + l2 -> val;
            if (carry) {
                cursum ++;
                carry = false;
            }
            if (cursum >= 10) carry = true;
            
            tmp -> next = new ListNode(cursum % 10);
            tmp = tmp -> next;
            l1 = l1 -> next;
            l2 = l2 -> next;
            
        }
        tmp -> next = l1 ? l1 : l2;
        while (carry && tmp -> next){
            tmp = tmp -> next;
            tmp -> val ++;
            carry = false;
            if (tmp -> val >= 10){
                tmp -> val %= 10;
                carry = true;
            }
        }
        if (carry) tmp -> next = new ListNode(1);
        
        
        return head -> next;
    }
};