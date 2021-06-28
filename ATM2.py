# cook your dish here

T = int(input())

for _ in range(T):
    n, k = map(int,input().split())
    an = list(map(int,input().split()))
    for a in an:
        if a <= k:
            k -= a
            print("1",end="")
        else:
            print("0",end="")
    print("")