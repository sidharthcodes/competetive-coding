# cook your dish here

T = int(input())

for _ in range(T):
    n = int(input())
    fact = 1
    while(n>=1):
        fact *= n
        n -= 1
    print(fact)