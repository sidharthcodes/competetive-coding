# cook your dish here

import math

T = int(input())

for _ in range(T):
    n, v1, v2 = map(int,input().split())
    t1 = (n*(math.sqrt(2))) / v1
    t2 = float((2*n)/v2)
    if t1>t2:
        print("Elevator")
    else:
        print("Stairs")