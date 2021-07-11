# cook your dish here

T = int(input())

for _ in range(T):
    n = int(input())
    an = list(map(int,input().split()))
    bn = list(map(int,input().split()))
    i = 0
    ans = 0
    while i<n:
        score = 20*an[i]-10*bn[i]
        if score < 0:
            score = 0
        if score > ans:
            ans = score
        i += 1
    print(ans)