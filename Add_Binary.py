class Solution:
    def addBinary(self, a: str, b: str) -> str:
        an = len(a)
        bn = len(b)
        mlen = 0
        dmap = {"0":0, "1":1}
        
        if an > bn:
            b = "0" * (an - bn) + b
            mlen = an - 1
        else:
            a = "0" * (bn - an) + a
            mlen = bn - 1
        print(a)
        print(b)
        
        carry = 0
        ans = []
        while mlen >= 0 or carry > 0:
            
            if carry > 0 and mlen < 0:
                print(-1)
                ans.append("1")
                break
            
            
            
            if dmap[a[mlen]] + dmap[b[mlen]] + carry == 3:
                print(dmap[a[mlen]],dmap[b[mlen]],carry, 0)
                ans.append("1")
                carry = 1
            elif dmap[a[mlen]] + dmap[b[mlen]] + carry == 2:
                print(dmap[a[mlen]],dmap[b[mlen]],carry,1)
                ans.append("0")
                carry = 1
            elif dmap[a[mlen]] + dmap[b[mlen]] + carry == 1:
                print(dmap[a[mlen]],dmap[b[mlen]],carry,2)
                ans.append("1")
                carry = 0     
            elif dmap[a[mlen]] + dmap[b[mlen]] + carry == 0:
                print(dmap[a[mlen]],dmap[b[mlen]],carry,3)
                ans.append("0")
                carry = 0
            print("len", mlen)    
            mlen -= 1
        return ''.join(ans[::-1])