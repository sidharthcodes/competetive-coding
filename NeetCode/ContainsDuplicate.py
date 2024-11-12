class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        numDict = {}
        for n in nums:
            if n in numDict.keys():
                return True
            else:
                numDict[n] = 1
        return False