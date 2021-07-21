# cook your dish here

T = int(input())

for _ in range(T):
    n = int(input())
    an = list(map(int,input().split()))
    i, j = 0, len(an)-1
    ans = "null"
    if an.count(1)>0 and an.count(2)>0 and an.count(3)>0 and an.count(4)>0 and an.count(5)>0 and an.count(6)>0 and an.count(7)>0:
        while i<len(an)/2:
            if an[i] != an[j]:
                ans = "no"
                break
            i += 1
            j -= 1
    else:
        ans = "no"
    if ans == "no":
        print("no")
    elif ans == "null":
        print("yes")