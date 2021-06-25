# cook your dish here
T = int(input())
for i in range(T):
    a, b = map(int,input().split())
    prod = a*b
    while(b):
        a,b = b,a%b
    gcd = a
    lcm = prod/gcd
    print(gcd,int(lcm))