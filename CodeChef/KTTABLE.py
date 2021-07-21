# cook your dish here

T = int(input())

for _ in range(T):
    n = int(input())
    an = list(map(int,input().split()))
    bn = list(map(int,input().split()))
    i = 0
    ans = 0
    while i<len(an):
        if i==0 and bn[i]<=an[i]:
            ans += 1
        else:
            if bn[i] <= (an[i]-an[i-1]):
                ans += 1
        i += 1
    print(ans)