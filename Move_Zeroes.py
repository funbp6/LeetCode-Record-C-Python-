class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        cur = 0
        nex = 0
        
        while nex < len(nums) :
            if nums[nex] == 0:
                nex += 1
            else:
                tmp = nums[nex]
                nums[nex] = nums[cur]
                nums[cur] = tmp
                cur += 1
                nex += 1
            