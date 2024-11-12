class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        dict1, dict2 = {}, {}
        if len(s) != len(t):
            return False
        for i in range(len(s)):
            if s[i] in dict1.keys():
                dict1[s[i]] += 1
            else:
                dict1[s[i]] = 1
            if t[i] in dict2.keys():
                dict2[t[i]] += 1
            else:
                dict2[t[i]] = 1
        if dict1 == dict2:
            return True
        else:
            return False