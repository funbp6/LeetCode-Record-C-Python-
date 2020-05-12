# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def deleteDuplicates(self, head: ListNode) -> ListNode:
        cur = pre = head
        appear = set()
        while cur:
            if cur.val in appear:
                pre.next = cur.next
                cur = cur.next
            else:
                appear.add(cur.val)
                pre = cur
                cur = cur.next
        return head
                