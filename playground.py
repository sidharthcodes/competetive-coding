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


def productExceptSelf(nums):
    result = [0] * len(nums)
    
    left_product = 1
    for i in range(len(nums)):
        result[i] = left_product
        left_product *= nums[i]
        # print(result)
    right_product = 1
    for i in range(len(nums) - 1, -1, -1):
        result[i] *= right_product
        right_product *= nums[i]
        # print(result)
    return result


def isValidSudoku(board):
    for i in range(9):
        check = {}
        for j in range(9):
            print(board[i][j], end=" ")
            if board[i][j]!="." and board[i][j] in check:
                return False
            else:
                check[board[i][j]] = 1
        print("")
    print("=----------------=")
    for i in range(9):
        check = {}
        for j in range(9):
            print(board[j][i], end=" ")
            if board[j][i]!="." and board[j][i] in check:
                return False
            else:
                check[board[j][i]] = 1
        print("")
    print("=----------------=")
    for k in range(9):
        check = {}
        for i in range(3):
            for j in range(3):
                row = (k//3)*3 + i
                col = (k%3)*3 + j
                print(board[row][col], end=" ")
                if board[row][col]!="." and board[row][col] in check:
                    return False
                else:
                    check[board[row][col]] = 1
            print("")
        print("=---=")
    return True

def longestConsecutive(nums):
    if not nums:
        return 0
    numSet, longest = set(nums), 1
    print(numSet)
    for n in numSet:
        if (n-1) not in numSet:
            seq = 1
            while (n+seq) in numSet:
                seq += 1
            longest = seq if seq>longest else longest
    return longest

def maxArea(height):
    left, right, maxarea = 0, len(height)-1, 0
    while left<right:
        area = min(height[left],height[right]) * (right-left)
        maxarea = area if area>maxarea else maxarea
        print(left,right, area, maxarea)
        if height[left]>height[right]:
            right -= 1
        else:
            left += 1
    return maxarea

# print(containsDuplicate(arr))
# print(ValidAnagram("anagram", "nagaram"))
# print(ValidAnagram("rat", "car"))
# print(groupAnagrams(["eat","tea","tan","ate","nat","bat"]))
# print(productExceptSelf([1,2,3,4]))
# print(isValidSudoku([["5","3",".",".","7",".",".",".","."],["6",".",".","1","9","5",".",".","."],[".","9","8",".",".",".",".","6","."],["8",".",".",".","6",".",".",".","3"],["4",".",".","8",".","3",".",".","1"],["7",".",".",".","2",".",".",".","6"],[".","6",".",".",".",".","2","8","."],[".",".",".","4","1","9",".",".","5"],[".",".",".",".","8",".",".","7","9"]]))
# print(isValidSudoku([["8","3",".",".","7",".",".",".","."],["6",".",".","1","9","5",".",".","."],[".","9","8",".",".",".",".","6","."],["8",".",".",".","6",".",".",".","3"],["4",".",".","8",".","3",".",".","1"],["7",".",".",".","2",".",".",".","6"],[".","6",".",".",".",".","2","8","."],[".",".",".","4","1","9",".",".","5"],[".",".",".",".","8",".",".","7","9"]]))
# print(longestConsecutive([100,4,200,1,3,2]))
# print(maxArea([1,8,6,2,5,4,8,3,7]))
