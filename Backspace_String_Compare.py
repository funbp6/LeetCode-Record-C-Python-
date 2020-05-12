class Solution:
    def backspaceCompare(self, S: str, T: str) -> bool:
        s = 0
        sptr = len(S) - 1
        t = 0
        tptr = len(T) - 1
        
        while sptr >= 0 or tptr >= 0:
            while sptr >= 0:
                if S[sptr] == "#":
                    s += 1
                    sptr -= 1
                elif S[sptr] != "#" and s > 0:
                    sptr -= 1
                    s -= 1
                else:
                    break
                    
            while tptr >= 0:
                if T[tptr] == "#":
                    # print(1)
                    t += 1
                    tptr -= 1
                elif T[tptr] != "#" and t > 0:
                    # print(2)
                    tptr -= 1
                    t -= 1
                else:
                    break
                    
            # print(S[sptr] , T[tptr])        
            if (sptr < 0 and tptr >= 0) or (sptr >= 0 and tptr < 0):
                return False
                
            if sptr >= 0 and tptr >= 0 and S[sptr] != T[tptr]: 
                return False
                            
            sptr -= 1
            tptr -= 1
        return True