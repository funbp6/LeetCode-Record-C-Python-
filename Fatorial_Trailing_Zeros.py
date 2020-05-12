class Solution:
    def trailingZeroes(self, n: int) -> int:
        def find5(n):
            if n < 5: return 0
            
            if n < 10: return 1
            
            return (n//5 + find5(n//5))
        
        return find5(n)