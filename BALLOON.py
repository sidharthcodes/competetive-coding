# cook your dish here

T = int(input())

for _ in range(T):
    no_list = [1, 2, 3, 4, 5, 6, 7]
    n = int(input())
    an = list(map(int,input().split()))
    i = 0
    while(no_list):
        for el in an:
            if el in no_list:
                no_list.remove(el)
            if len(no_list) == 0:
                break
            i += 1
    print(i+1)