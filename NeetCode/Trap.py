class Solution:
    def trap(self, height: List[int]) -> int:
        leftPtr, rightPtr = 0, len(height)-1
        leftMax, rightMax = height[leftPtr], height[rightPtr]
        water = 0
        while leftPtr < rightPtr:
            if leftMax < rightMax:
                leftPtr += 1
                leftMax = max(leftMax, height[leftPtr])
                water += leftMax - height[leftPtr]
            else:
                rightPtr -= 1
                rightMax = max(rightMax, height[rightPtr])
                water += rightMax - height[rightPtr]
        return water