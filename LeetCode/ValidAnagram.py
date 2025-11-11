'''

Given two strings s and t, return true if t is an anagram of s, and false otherwise.

 

Example 1:

Input: s = "anagram", t = "nagaram"

Output: true

Example 2:

Input: s = "rat", t = "car"

Output: false

 

Constraints:

1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.
 

'''


class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return sorted(s) == sorted(t)

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # print(set(s), set(t))
        sDict, tDict = {}, {}
        if len(s) != len(t):
            return False
        for i in range(len(s)):
            if s[i] in sDict:
                sDict[s[i]] += 1
            else:
                sDict[s[i]] = 1
            if t[i] in tDict:
                tDict[t[i]] += 1
            else:
                tDict[t[i]] = 1
        # print(sDict)
        # print(tDict)
        return sDict == tDict

def isAnagram(self, s: str, t: str) -> bool:
    s_count = [0]*26
    t_count = [0]*26
    for a in s:
        s_count[ord(a)-ord('a')] += 1
        # print(s, s_count)
    for b in t:
        t_count[ord(b)-ord('a')] += 1
        # print(t, t_count)
    # print(s_count)
    # print(t_count)
    return s_count == t_count