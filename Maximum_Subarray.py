class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        n = len(nums)
        maxsum = nums[0]
        cur = nums[0]
        for i in range(1 ,n):
            
            if nums[i] > cur + nums[i]:
                cur = nums[i]
            else:
                cur += nums[i]
                
            if cur > maxsum:
                maxsum = cur
        return maxsum