class Solution:
    def canJump(self, nums: List[int]) -> bool:
        
        n = len(nums)
        if n == 1 : return True
        
        last = n - 1
        for i in reversed(range(n)):
            if i + nums[i] >= last:
                last = i
        if last == 0: return True
        return False