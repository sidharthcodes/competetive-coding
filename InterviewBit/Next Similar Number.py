def solve(A):
    n, i = len(A), 0
    if n<2:
        return -1
    numList = list(map(int ,A))
    for i in range(n-1,0,-1):
        if numList[i] > numList[i-1]:
            break
    if i == 1 and numList[i] <= numList[i-1]:
        return -1
    x = numList[i-1]
    smallest = i
    for j in range(i+1,n):
        if numList[j] > x and numList[j] < numList[smallest]:
            smallest = j
    numList[smallest],numList[i-1] = numList[i-1], numList[smallest]
    x = 0
    for j in range(i):
        x = x * 10 + numList[j]
    numList = sorted(numList[i:])
    for j in range(n-i):
        x = x * 10 + numList[j]
    return x