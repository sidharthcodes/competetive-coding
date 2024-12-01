class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        result = [0] * len(temperatures)
        tempStack = []
        for ind, temp in enumerate(temperatures):
            while tempStack and temp > tempStack[-1][0]:
                stackT, stackInd = tempStack.pop()
                result[stackInd] = ind - stackInd
            tempStack.append((temp, ind))
        return result