# cook your dish here

T = int(input())

for _ in range(T):
    n, k = map(int,input().split())
    print(k//n)