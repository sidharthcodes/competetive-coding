'''

Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

 

Example 1:

Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]

Example 2:

Input: nums = [1], k = 1
Output: [1]

Example 3:

Input: nums = [1,2,1,2,1,2,3,1,3,2], k = 2
Output: [1,2]


Constraints:

1 <= nums.length <= 105
-104 <= nums[i] <= 104
k is in the range [1, the number of unique elements in the array].
It is guaranteed that the answer is unique.
 

Follow up: Your algorithm's time complexity must be better than O(n log n), where n is the array's size.

'''


class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freqDict = {}
        for n in nums:
            if n in freqDict:
                freqDict[n] += 1
            else:
                freqDict[n] = 1
        # print(freqDict)
        sortedFreqDict = {k: v for k, v in sorted(freqDict.items(), key=lambda item: item[1], reverse=True)}
        # print(sortedFreqDict)
        return list(sortedFreqDict.keys())[:k]
    
