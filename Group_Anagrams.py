class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
            sdict = {}
            for stri in strs:
                sorted_stri = ''.join(sorted(stri)) 
                # print(sorted_stri)
                if sorted_stri in sdict:
                    sdict[sorted_stri].append(stri)
                
                else:
                    sdict[sorted_stri] = [stri]
                    
            return sdict.values()