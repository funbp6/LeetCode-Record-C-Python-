class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        if not prices: return 0
        
        minprice = prices[0]
        maxprofit = 0
        
        for price in prices:
            minprice = min(minprice, price)
            
            maxprofit = max(maxprofit, price - minprice)
            
        return maxprofit