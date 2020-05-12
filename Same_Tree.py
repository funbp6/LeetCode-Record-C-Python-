# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def isSameTree(self, p: TreeNode, q: TreeNode) -> bool:
        self.ans = True
        def tracetwo(t1, t2):
            if not t1 and not t2: 
                return 0
            if not t1 or not t2:
                self.ans = False
                return 0
            
            tracetwo(t1.left, t2.left)
            tracetwo(t1.right, t2.right)
            
            if t1.val != t2.val:  self.ans = False
            
            return 0
        tracetwo(p, q)
        return self.ans