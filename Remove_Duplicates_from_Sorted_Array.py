class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        
        index = 1
        n = len(nums)
        for cur in range(n-1):
            if nums[cur] != nums[cur+1]:
                nums[index] = nums[cur+1]
                index += 1
        return index
            
        
        
        
        
        
        
        # cur = 0
        # fdup = 0
        # while fdup < len(nums) :  
        #     while (fdup+1) < len(nums) and nums[fdup] == nums[fdup+1] :
        #         fdup += 1
        #     if fdup == len(nums)-1:
        #         break
        #     fdup += 1
        #     cur += 1
        #     nums[cur] = nums[fdup]
        # return cur+1  