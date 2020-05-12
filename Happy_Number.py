class Solution:
    def isHappy(self, n: int) -> bool:
        badnums = {16, 37, 58, 89, 145, 42, 20, 4}
        sumn = str(n)
        count = 0
        
        while sumn != "1":
            
            tmp = 0
            for i in sumn:
                tmp += int(i)**2
            print(tmp)
            
            if tmp in badnums:
                return False
            sumn = str(tmp)

    
            count += 1
        return True