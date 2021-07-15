# cook your dish here

n, k = map(int,input().split())
twt = [0]*n

for _ in range(k):
    q = input()
    if q == 'CLOSEALL':
        twt = [0]*n
    else:
        num = int(q.split()[1])-1
        if twt[num] == 0:
            twt[num] = 1
        else:
            twt[num] = 0
    print(twt.count(1))
    