class Solution:
    def reverse(self, x: int) -> int:
        rev_x=0
        inverse_tag = False
        if x < 0 :
            inverse_tag = True
            x *= -1
        
        sx = int(str(x)[::-1])
        
        if sx > 2**31-1:
            return 0
        
        if inverse_tag == True:
            sx *= -1
        return sx
        
#         while x > 0: 
#             rev_x = rev_x*10 + x%10
#             x = x//10
        
#         if rev_x > 2**31-1:
#             return 0
        
        # if inverse_tag == True:
        #     rev_x *= -1
        # return rev_x