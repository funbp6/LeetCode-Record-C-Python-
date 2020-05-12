# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def hasPathSum(self, root: TreeNode, sum: int) -> bool:
        
        leaflist = []
        self.ans = False
        def psum(node, target):
            if self.ans == True: return 0
            if not node: return 0
            if not node.left and not node.right:
                if node.val == target:
                    self.ans = True
                    
            

            if node.left:        
                psum(node.left, target - node.val)
            if node.right:
                psum(node.right, target - node.val)
            return 0
        psum(root, sum)
        
        return self.ans