t = int(input())
for _ in range(t):
    x, y, z = map(int,input().split())
    if x==max(x,y,z):
        print(y if y>z else z)
    elif y==max(x,y,z):
        print(z if z>x else x)
    elif z == max(x,y,z):
        print(x if x>y else y)