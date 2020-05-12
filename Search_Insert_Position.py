class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        
        def bi_search(nums, start, end, target):
            
            if start > end:
                return start
            
            pos = (end + start)//2 
            
            if nums[pos] == target:
                return pos
            
            
            
            if target > nums[pos]:
                return bi_search(nums, pos+1, end, target)
            if target < nums[pos]:
                return bi_search(nums, start, pos-1, target)
        
        return bi_search(nums, 0, len(nums)-1, target)