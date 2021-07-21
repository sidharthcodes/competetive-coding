# cook your dish here

T = int(input())

for _ in range(T):
    n = int(input())
    s = input()
    r = input()
    szero, sone, rzero, rone = 0,0,0,0
    for i in range(len(s)):
        if s[i] == '0':
            szero += 1
        else:
            sone += 1
        if r[i] == '0':
            rzero += 1
        else:
            rone += 1
    if szero == rzero and sone == rone:
        print("YES")
    else:
        print("NO")