# cook your dish here

T = int(input())

for _ in range(T):
    x, y = map(int,input().split())
    ans = x-y
    if ans<0:
        ans = 0
    print(ans)