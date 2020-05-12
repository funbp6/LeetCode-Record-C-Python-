# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def rangeSumBST(self, root: TreeNode, L: int, R: int) -> int:
        
        
        def sumbst(node):
            
            if not node: return 0
            
            if node.val > R:
                return sumbst(node.left)
            
            if node.val < L:
                return sumbst(node.right)
           
            return sumbst(node.left)+ sumbst(node.right) + node.val
        
        return sumbst(root)