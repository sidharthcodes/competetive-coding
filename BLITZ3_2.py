# cook your dish here

T = int(input())

for _ in range(T):
    n,a,b = map(int,input().split())
    total = 2*(180+n)
    ans = total - (a+b)
    print(ans)