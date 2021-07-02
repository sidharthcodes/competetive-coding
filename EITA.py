# cook your dish here

T = int(input())

for _ in range(T):
    m1 = 0
    m2 = 0
    d,x,y,z = map(int,input().split())
    m1 = 7*x
    m2 = d*y + (7-d)*z
    if(m1>m2):
        print(m1)
    else:
        print(m2)