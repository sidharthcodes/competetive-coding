from collections import defaultdict

def containsDuplicate(nums):
    print(set(nums))
    print(nums)
    return len(set(nums)) < len(nums)

arr = [1,2,3,4,5,6,7,8,9,0]


def ValidAnagram(s, t):
    sOrd, tOrd = 0, 0
    for a in s:
        sOrd += ord(a)
    for b in t:
        tOrd += ord(b)
    print(sOrd, tOrd)
    return sOrd == tOrd

def groupAnagrams(strs):
    sol = defaultdict(list)
    for s in strs:
        count = [0] * 26
        for c in s:
            print(c, ord(c) - ord('a'))
            count[ord(c) - ord('a')] += 1
        print(s, count)
        print('..', tuple(count))
        sol[tuple(count)].append(s)
    return list(sol.values())


# print(containsDuplicate(arr))
# print(ValidAnagram("anagram", "nagaram"))
# print(ValidAnagram("rat", "car"))
print(groupAnagrams(["eat","tea","tan","ate","nat","bat"]))

