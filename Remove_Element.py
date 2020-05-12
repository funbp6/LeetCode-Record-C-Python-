class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        
        index = 0
        n = len(nums)
        for cur in range(n):
            if nums[cur] != val:
                nums[index] = nums[cur]
                index += 1
        return index