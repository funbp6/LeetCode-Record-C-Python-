class Solution:
    def checkValidString(self, s: str) -> bool:
        if not s: return True
        
        if s[0] == ")": return False
        if s[-1] == "(": return False
        
        pstack = 0
        # star = 0
        for i in s:
            if i != ")" :
                pstack += 1
            else:
                pstack -= 1
        if pstack < 0 :
            return False
        
        pstack = 0
        
        for i in s[::-1]:
            if i != "(" :
                pstack += 1
            else:
                pstack -= 1
        if pstack < 0 :
            return False
        
        return True