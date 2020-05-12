class Solution:
    def romanToInt(self, s: str) -> int:
        roman_map = {"I":1, "V":5, "X":10, "L":50, "C":100, "D":500, "M":1000}
        intsum = 0
        n = len(s)
        
        for i in range(n-1):
            cur = roman_map[s[i]]
            nex = roman_map[s[i+1]]
            if nex > cur:
                intsum -= cur
                
            else:
                intsum += cur
        intsum += roman_map[s[-1]]
        
        return intsum