# cook your dish here

T = int(input())

for _ in range(T):
    a,b,x = map(int,input().split())
    ans = (b-a)/x
    print(int(ans))