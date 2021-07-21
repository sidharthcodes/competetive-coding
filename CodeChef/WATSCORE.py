# cook your dish here

T = int(input())

for _ in range(T):
    my_dict = {1: 0, 2: 0, 3: 0, 4: 0, 5: 0, 6: 0, 7: 0, 8: 0}
    ans = 0
    n = int(input())
    for _ in range(n):
        p, s = map(int,input().split())
        if(p<9 and s>my_dict[p]):
            my_dict[p] = s
    for key, val in my_dict.items():
        if(val):
            ans += val
    print(ans)
