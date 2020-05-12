class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        
        ans = [0] * n
        ans[0] = 1
        for i in range(1, n):
            ans[i] = ans[i-1] * nums[i-1]
            
        r = 1
        for i in reversed(range(n)):
            ans[i] = r * ans[i]
            r *= nums[i] 
        
        # ans[0] = rprod[0]
        # ans[-1] = lprod[-1]
        # for i in range(1, n-1):
        #     ans[i] = rprod[i] * lprod[i-1]
        
        return ans