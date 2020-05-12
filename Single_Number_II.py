class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        ones = twos = threes = 0
        
        for i in nums:
            twos |= ones & i
            ones ^= i
            threes = ones & twos
            ones &= ~threes
            twos &= ~threes
        return ones