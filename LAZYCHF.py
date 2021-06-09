# cook your dish here

T = int(input())

for _ in range(T):
    x,m,d = map(int,input().split())
    if((m*x)<(x+d)):
        print(m*x)
    else:
        print(x+d)
