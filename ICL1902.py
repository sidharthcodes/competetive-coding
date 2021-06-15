# cook your dish here
import math

t = int(input())

for _ in range(t):
    n = int(input())
    ans = 0
    while(n != 0):
        root = int(round(math.sqrt(n)))
        if(root*root > n):
            root -= 1
        n -= root*root
        ans += 1
    print(ans)