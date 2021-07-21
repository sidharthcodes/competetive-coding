t = int(input())

for _ in range(t):
    n, x = map(int,input().split())
    max = 0
    for _ in range(n):
        s, r = map(int,input().split())
        if(s<=x and r>max):
            max = r
    print(max)