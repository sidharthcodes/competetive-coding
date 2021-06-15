# cook your dish here

T = int(input())

for _ in range(T):
    n = int(input())
    sqr = 0
    if(n%2 == 0):
        start = 2
    else:
        start = 1
    for i in range(start, n+1, 2):
        sqr += i*i
    print(sqr)