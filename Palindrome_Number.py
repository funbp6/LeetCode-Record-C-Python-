class Solution:
    def isPalindrome(self, x: int) -> bool:
        sx = str(x)
        if sx != sx[::-1]:
            return False
        else:
            return True