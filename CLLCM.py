# cook your dish here

T = int(input())

for _ in range(T):
    ans = 1
    n = int(input())
    an = list(map(int,input().split()))
    for el in an:
        if el%2 == 0:
            ans = 0
    if ans == 1:
        print("YES")
    else:
        print("NO")