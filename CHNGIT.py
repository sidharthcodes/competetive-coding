# cook your dish here

T = int(input())

for _ in range(T):
    my_dict = {}
    n = int(input())
    a = list(map(int,input().split()))
    for el in a:
        if(el not in my_dict):
            my_dict[el] = 1
        else:
            my_dict[el] += 1
    max = 0
    for val in my_dict.values():
        if(val>max):
            max = val
    n -= max
    print(n)