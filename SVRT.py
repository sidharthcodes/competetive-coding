# cook your dish here

T = int(input())

for _ in range(T):
    n,k = map(int,input().split())
    d = (n-1)/k+1
    x = n%k
    if x==0:
        x = k
    print(int(d),int(x))
    