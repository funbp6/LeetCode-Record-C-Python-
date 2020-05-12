# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def middleNode(self, head: ListNode) -> ListNode:
        nodei = head 
        link_len = 0
        
        while nodei != None:
            link_len += 1
            nodei = nodei.next
        mid = link_len // 2
        
        ans_node = head
        for i in range(mid):
            print(ans_node.val)
            ans_node = ans_node.next
        return ans_node