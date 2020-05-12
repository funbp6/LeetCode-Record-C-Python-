# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def maxDepth(self, root: TreeNode) -> int:
        
        maxdepth = 0
        def md(node):
            if not node: return 0
            
            maxld = md(node.left)
            maxrd = md(node.right)
            maxdepth = maxrd
            
            if maxld > maxrd:
                maxdepth = maxld
            return maxdepth + 1
            
        return md(root)