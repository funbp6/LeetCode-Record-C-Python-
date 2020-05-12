class Solution:
    def isValid(self, s: str) -> bool:
        
        pmap = {"{" : "}", "(" : ")", "[" : "]"}
        pre = {"{", "(", "["}
        
        stack = []
        
        for i in s:
            if i in pre:
                stack.append(i)
            else:
                if not stack:
                    return False
                    
                elif pmap[stack.pop()] != i:
                    return False
        if stack:
            return False
        return True