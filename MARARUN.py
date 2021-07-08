# cook your dish here

T = int(input())

for _ in range(T):
    D, d, a, b, c = map(int,input().split())
    if D*d >= 42:
        ans = c
    elif D*d >= 21:
        ans = b
    elif D*d >= 10:
        ans = a
    else:
        ans = 0
    print(ans)