class Solution:
    def convertToTitle(self, n: int) -> str:
        charstr = ""        
        
        while n > 0:
            
            tmp = (n-1) % 26
            n -= tmp+1
            n //= 26
            charstr = chr(tmp+65) + charstr
            
            
        return charstr