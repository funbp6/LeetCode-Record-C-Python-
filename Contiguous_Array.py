class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        
        csmap = {}
        csum = 0
        maxconti = 0
        csmap[0] = -1
            
        for i in range(len(nums)):
            if nums[i] == 0:
                csum -= 1
            else:
                csum += 1
            
            if csum in csmap:
                maxconti = max(maxconti , i - csmap[csum])
            else:
                csmap[csum] = i
        return maxconti
            