# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def invertTree(self, root: TreeNode) -> TreeNode:
        
        def tinvert(node):
            if not node: return 0
            
            tinvert(node.left)
            tinvert(node.right)
            
            node.left, node.right = node.right, node.left       
            
        tinvert(root)
        return root