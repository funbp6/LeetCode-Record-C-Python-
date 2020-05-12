class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        if s and s[-1] == ' ': 
            while s and s[-1] == ' ':
                s = s[:-1]
        if not s: return 0
         
        wsp = len(s) - 1
        
        while wsp > 0:
            if s[wsp] == ' ':
                break
            wsp -= 1
        if s[wsp] == ' ': return len(s) - 1 - wsp
        return len(s) - wsp