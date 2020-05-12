class MinStack:

    def __init__(self):
        """
        initialize your data structure here.
        """
        self.sarr = []
        

    def push(self, x: int) -> None:
        self.sarr.append(x)

    def pop(self) -> None:
        if len(self.sarr) == 0:
            return NULL
        
        x = self.sarr[-1]
        del self.sarr[-1]
        return x

    def top(self) -> int:
        return self.sarr[-1]

    def getMin(self) -> int:
        return min(self.sarr)


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(x)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()