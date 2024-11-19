class Solution:
    def isPalindrome(self, s: str) -> bool:
        leftItr, rightItr = 0, len(s)-1
        while leftItr < rightItr:
            while leftItr < rightItr and not s[leftItr].isalnum():
                leftItr += 1
            while leftItr < rightItr and not s[rightItr].isalnum():
                rightItr -= 1
            if s[leftItr].lower() != s[rightItr].lower():
                return False
            leftItr += 1
            rightItr -= 1
        return True