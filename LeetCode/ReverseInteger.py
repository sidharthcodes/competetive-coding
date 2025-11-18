'''

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
Assume the environment does not allow you to store 64-bit integers (signed or unsigned).


Example 1:
Input: x = 123
Output: 321

Example 2:
Input: x = -123
Output: -321

Example 3:
Input: x = 120
Output: 21

Constraints: -231 <= x <= 231 - 1

'''


class Solution:
    def reverse(self, x: int) -> int:
        rev, negative = 0, False
        if x<0:
            x = abs(x)
            negative = True
        if x < 10:
            return -x if negative else x
        while x>=1:
            if rev>2**31:
                return 0
            rev += int(x%10)
            # print(rev)
            rev *= 10
            x /= 10
            # print(x)
        # print("")
        ans = int(-rev/10) if negative else int(rev/10)
        return ans