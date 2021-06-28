# cook your dish here

T = int(input())

for _ in range(T):
    n = int(input())
    an = list(map(int,input().split()))
    bn = list(map(int,input().split()))
    max_a = 0
    max_b = 0
    sum_a = 0
    sum_b = 0
    for i in range(n):
        sum_a += an[i]
        sum_b += bn[i]
        if an[i]>max_a:
            max_a = an[i]
        if bn[i]>max_b:
            max_b = bn[i]
    if sum_a-max_a<sum_b-max_b:
        print("Alice")
    elif sum_a-max_a>sum_b-max_b:
        print("Bob")
    else:
        print("Draw")