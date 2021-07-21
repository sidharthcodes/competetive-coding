# cook your dish here

t = int(input())

for _ in range(t):
    h, x, y, c = map(int,input().split())
    req = h * (x + y//2)
    if(req<=c):
        print("yes")
    else:
        print("no")