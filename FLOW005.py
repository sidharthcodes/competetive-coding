# cook your dish here

T = int(input())

deno = [100, 50, 10, 5, 2, 1]

for _ in range(T):
    n = int(input())
    ans = 0
    for i in range(6):
        ans += int(n/deno[i])
        n = int(n%deno[i])
    print(ans)