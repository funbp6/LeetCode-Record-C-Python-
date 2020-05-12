# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def longestUnivaluePath(self, root: TreeNode) -> int:
        self.ans = 0
        
            
            
        def flongest(node):
            
            if not node:
                return 0
            l = r = 0
            ll = flongest(node.left)
            rl = flongest(node.right)
            
            if node.left and node.left.val == node.val:
                l = ll + 1
            if node.right and node.right.val == node.val:
                r = rl + 1
            
            self.ans = max(self.ans, l + r)
            
            return max(l, r)
        
        flongest(root)
        return self.ans