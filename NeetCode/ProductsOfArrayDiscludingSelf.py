class Solution:
    #brute force
    # def productExceptSelf(self, nums: List[int]) -> List[int]:
    #     n = len(nums)
    #     res = [0] * n

    #     for i in range(n):
    #         prod = 1
    #         for j in range(n):
    #             if i == j:
    #                 continue    
    #             prod *= nums[j]
            
    #         res[i] = prod
    #     return res

    # Divison method
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        prod, zeros = 1, 0
        for num in nums:
            if num:
                prod *= num
            else:
                zeros +=  1
        if zeros > 1: return [0] * len(nums)

        res = [0] * len(nums)
        for i, c in enumerate(nums):
            if zeros: res[i] = 0 if c else prod
            else: res[i] = prod // c
        return res

