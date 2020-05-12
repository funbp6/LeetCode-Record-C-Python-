# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def isBalanced(self, root: TreeNode) -> bool:
        if not root: return True
        
        self.ans = True
        
        def maxdep(node):
            if self.ans == False: return 0
            if not node: return 0
            
            
            llen = maxdep(node.left)
            rlen = maxdep(node.right)
            print(llen, rlen)
            if  llen - rlen > 1 or llen - rlen < -1:
                self.ans = False
                
            
            if llen > rlen:
                return llen + 1
            return rlen + 1
        maxdep(root)
        # if maxdep(root) == False: return False  
        return self.ans