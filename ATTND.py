T = int(input())

for _ in range(T):
    First, Last = [], []
    n = int(input())
    for _ in range(n):
        fname = input().split()
        First.append(fname[0])
        Last.append(fname[1])
    for i in range(len(First)):
        if First.count(First[i]) == 1:
            print(First[i])
        else:
            print(First[i], Last[i])