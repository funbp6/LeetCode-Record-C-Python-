class Solution:
    def titleToNumber(self, s: str) -> int:
        cn = 0
        
        for i in s:
            cn = (ord(i) - 64 + cn) * 26
            
        cn /= 26
        
        return int(cn)