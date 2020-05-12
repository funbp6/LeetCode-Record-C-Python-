class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        maxlen = 0
        tmplen = 0
        
        for i in nums:
            if i == 0:
                if tmplen > maxlen:
                    maxlen = tmplen
                tmplen = 0
                continue
            if i == 1:
                tmplen += 1
        
        if tmplen > maxlen:
            maxlen = tmplen
        return maxlen