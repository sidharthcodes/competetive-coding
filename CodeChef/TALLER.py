t = int(input())
for _ in range(t):
    x, y = map(int,input().split())
    print("A" if x>y else "B")