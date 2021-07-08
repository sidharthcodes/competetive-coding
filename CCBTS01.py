# cook your dish here

T = int(input())

for _ in range(T):
    s = input()
    if 'P' in s and 'C' in s and 'M' in s:
        print("YES")
    else:
        print("NO")