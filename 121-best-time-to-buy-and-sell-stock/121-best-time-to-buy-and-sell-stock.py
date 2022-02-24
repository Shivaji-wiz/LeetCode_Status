class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        mx = 0
        mini = prices[0]
        n = len(prices)
        for i in range(0,n):
            
            mini = min(mini,prices[i])
            profit = prices[i] - mini
            mx = max(mx,profit)
        return mx
        