class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        earn = 0
        buyd = 0
        selld = 0 
        n = len(prices)
        for day in range(n-1):

            cur = prices[day]
            nex = prices[day+1]
            if cur > nex:
                earn += prices[selld] - prices[buyd]
                selld += 1
                buyd = selld
            else:
                selld += 1
                
            if selld == n-1:
                earn += prices[selld] - prices[buyd]
                break
        
        return earn