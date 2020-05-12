# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def minDepth(self, root: TreeNode) -> int:
        def mdep(node):
            if not node: return 0
            
            ln = mdep(node.left)
            rn = mdep(node.right)
            
            if ln == 0 or rn == 0:
                return max(ln, rn) + 1
            return min(ln, rn) + 1
            
        return mdep(root)
            