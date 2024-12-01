class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        leftPtr, rightPtr = 0, 1
        maxProfit = 0
        while rightPtr < len(prices):
            if prices[leftPtr] < prices[rightPtr]:
                profit = prices[rightPtr] - prices[leftPtr]
                maxProfit = max(maxProfit, profit)
            else:
                leftPtr = rightPtr
            rightPtr += 1
        return maxProfit