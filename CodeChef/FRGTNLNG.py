# cook your dish here

T = int(input())

for _ in range(T):
    N, K = map(int,input().split())
    words = input().split()
    phrases = []
    for k in range(K):
        phrases.extend(input().split())
    common = []
    for w in words:
        if w in phrases:
            common.append('YES')
        else:
            common.append('NO')
    print(*common)