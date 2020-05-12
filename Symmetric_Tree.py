# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def isSymmetric(self, root: TreeNode) -> bool:
        if not root: return True
        
        
        def iss(nl, nr):
            if not nl and not nr: 
                return True
            if not nl or not nr:
                return False
            
            if  nl.val != nr.val: 
                return False
            return iss(nl.left, nr.right) and iss(nr.left, nl.right)
        return iss(root.left, root.right)
        