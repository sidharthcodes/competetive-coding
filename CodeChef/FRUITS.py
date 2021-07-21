# cook your dish here

T = int(input())

for _ in range(T):
    n, m, k = map(int,input().split())
    while k>0:
        if n>m:
            m += 1
        elif m>n:
            n += 1
        k -= 1
    print(abs(n-m))