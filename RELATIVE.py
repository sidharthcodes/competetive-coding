# cook your dish here

T = int(input())

for _ in range(T):
    g,c = map(int,input().split())
    print(int((c*c)/(2*g)))