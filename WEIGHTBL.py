# cook your dish here

T = int(input())

for _ in range(T):
    w1, w2, x1, x2, m = map(int,input().split())
    if (w2-w1) >= m*x1 and (w2-w1) <= m*x2:
        print('1')
    else:
        print('0')