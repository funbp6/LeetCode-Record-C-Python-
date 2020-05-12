class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        while len(stones) > 1:
            stones.sort(reverse = True)
            stones[1] = stones[0] - stones[1]
            del stones[0]
        
        if len(stones) == 0:
            return 0
        return stones[0]