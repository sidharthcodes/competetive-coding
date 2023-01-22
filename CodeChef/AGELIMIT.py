n = int(input())

for _ in range(n):
    nlist = list(map(int,input().split()))
    if nlist[2] >= nlist[0] and nlist[2] < nlist[1]:
        print("YES")
    else:
        print("NO")