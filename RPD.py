# cook your dish here

T = int(input())

for _ in range(T):
    n = int(input())
    a = list(map(int,input().split()))
    max = 0
    for i in range(len(a)):
        j = i+1
        while j<len(a):
            sum = 0
            pro = a[i]*a[j]
            while pro > 0:
                rem = pro%10
                sum += rem
                pro = int(pro/10)
            if sum > max:
                max = sum
            j += 1
    print(max)