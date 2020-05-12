class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        
        if len(nums) == 1:
            return nums[0]
        
        majtime = len(nums) // 2 + 1
        maptn = {}
        for i in nums:
            if i in maptn:
                maptn[i] += 1
            else:
                maptn[i] = 1
            if maptn[i] >= majtime:
                return i
                