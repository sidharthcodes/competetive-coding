class Solution:
    def maxArea(self, heights: List[int]) -> int:
        leftPtr, rightPtr = 0, len(heights)-1
        sol = 0
        while leftPtr < rightPtr:
            area = (rightPtr-leftPtr)*min(heights[leftPtr], heights[rightPtr])
            if area>sol:
                sol = area
            if heights[leftPtr] < heights[rightPtr]:
                leftPtr += 1
            else:
                rightPtr -= 1
        return sol