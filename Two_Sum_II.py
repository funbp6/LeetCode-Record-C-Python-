class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        nmap = {}
        
        
        for i, v in enumerate(numbers):
            nmap[v] = i
            
        for i in range(len(numbers)):
            diff = target - numbers[i]
            
            if diff in nmap:
                return [i+1, nmap[diff]+1]