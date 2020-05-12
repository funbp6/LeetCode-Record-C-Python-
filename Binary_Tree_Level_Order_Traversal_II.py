# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def levelOrderBottom(self, root: TreeNode) -> List[List[int]]:
        tmap = {}
        res = []
        
        def ttol(node, level):
            if node:
                if len(res) < level + 1:
                    res.insert(0, [])
                res[-(level + 1)].append(node.val)

                ttol(node.left, level + 1)
                ttol(node.right, level + 1)
            
        ttol(root, 0)
        
        
        # dep = ttol(root, 0)
        # ans = []
        # for i in range(dep-1, -1, -1):
        #     ans.append(tmap[i])
            
        return res