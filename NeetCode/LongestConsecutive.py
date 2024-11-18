class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        numsSet = set(nums)
        sol = 0
        for n in nums:
            if (n-1) not in numsSet:
                seq = 1
                while (n+seq) in numsSet:
                    seq += 1
                sol = seq if seq>sol else sol
        return sol