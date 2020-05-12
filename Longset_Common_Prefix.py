class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        
        
        if not strs:
            return ""
        
        minstr = min(strs, key=len) 

        for i in range(len(minstr)):
            for stri in strs:
                if stri[i] != minstr[i]:
                    return minstr[:i]
        return minstr