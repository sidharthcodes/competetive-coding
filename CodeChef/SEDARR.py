# cook your dish here

t = int(input())

for _ in range(t):
    n, k = map(int,input().split())
    a = list(map(int,input().split()))
    if(sum(a)%k == 0):
        print(0)
    else:
        print(1)