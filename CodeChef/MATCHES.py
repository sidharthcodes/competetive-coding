# cook your dish here

T = int(input())

for _ in range(T):
    a,b = map(int,input().split())
    sum = a+b
    ans = 0
    while(sum):
        rem = sum%10
        if(rem == 0):
            ans += 6
        elif(rem == 1):
            ans += 2
        elif(rem == 2 or rem == 3 or rem == 5):
            ans += 5
        elif(rem == 4):
            ans += 4
        elif(rem == 6 or rem == 9):
            ans += 6
        elif(rem == 7):
            ans += 3
        elif(rem == 8):
            ans += 7
        sum = sum//10
    print(ans)