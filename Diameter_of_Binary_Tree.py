# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def diameterOfBinaryTree(self, root: TreeNode) -> int:
        self.ans = 0



        
        def diameter(node):
            
            if not node: return 0
            
            
            maxld = diameter(node.left)
            maxrd = diameter(node.right)
            
            l = r = 0
            if node.left:
                l = maxld + 1
                
            if node.right:
                r = maxrd + 1
            
            self.ans = max(self.ans, l+r)
            # print(node.val, l, r, self.ans)
            return max(l, r)
        
        diameter(root)
        return self.ans
            