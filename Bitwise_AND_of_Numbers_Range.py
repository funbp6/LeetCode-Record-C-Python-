class Solution:
    def rangeBitwiseAnd(self, m: int, n: int) -> int:
        lshift = 0
        while m != n:
            m >>= 1
            n >>= 1
            lshift += 1
        return m << lshift