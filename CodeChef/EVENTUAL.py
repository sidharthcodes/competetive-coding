# cook your dish here

T = int(input())

for _ in range(T):
    n = int(input())
    my_str = input()
    freq = {}
    for s in my_str:
        if s in freq:
            freq[s] += 1
        else:
            freq[s] = 1
    ans = 1
    for val in freq.values():
        if(val%2 != 0):
            ans = 0
            break
    if ans == 1:
        print("YES")
    else:
        print("NO")