# cook your dish here

T = int(input())

ans = 0
for _ in range(T):
    s = input()
    if 'ch' in s or 'he' in s or 'ef' in s:
        ans += 1
print(ans)