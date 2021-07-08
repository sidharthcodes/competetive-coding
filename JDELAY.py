# cook your dish here

T = int(input())

for _ in range(T):
    n = int(input())
    ans = 0
    for _ in range(n):
        s, j = map(int,input().split())
        if j-s > 5:
            ans += 1
    print(ans)