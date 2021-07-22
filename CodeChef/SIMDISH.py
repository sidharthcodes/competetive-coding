# cook your dish here

T = int(input())

for _ in range(T):
    count = 0
    d1 = input().split()
    d2 = input().split()
    for d in d1:
        if d in d2:
            count += 1
    if(count>=2):
        print("similar")
    else:
        print("dissimilar")