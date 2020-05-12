# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> TreeNode:

                                
        def ibst(left, right):
            if left > right: return None

            mid = (right + left + 1) // 2

            tmp = TreeNode(nums[mid])

            tmp.left = ibst(left, mid-1)
            tmp.right = ibst(mid+1, right)
            return tmp
        

            
        return ibst(0, len(nums)-1) 
    
            