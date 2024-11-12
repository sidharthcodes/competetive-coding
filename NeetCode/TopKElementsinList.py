class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        numDict = {}
        for n in nums:
            if n in numDict:
                numDict[n] += 1
            else:
                numDict[n] = 1
        numDict = dict(sorted(numDict.items(), key=lambda item: item[1]))
        ans = list(numDict.keys())[::-1]
        return ans[:k]