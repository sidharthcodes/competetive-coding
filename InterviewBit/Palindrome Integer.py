def isPalindrome(A):
    ans = 1
    arr = []
    if A<0:
        return 0
    while A>0:
        arr.append(int(A%10))
        A = int(A/10)
    #print(arr)
    i, j = 0, len(arr)-1
    while(i<len(arr)):
        if arr[i] != arr[j]:
            ans = 0
            break
        i += 1
        j -= 1
    #print(ans)
    return ans