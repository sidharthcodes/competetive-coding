# cook your dish here

T = int(input())

for _ in range(T):
    flag = 0
    s = input()
    i = 0
    while(i<len(s)):
        if s[i] == s[i+1]:
            flag = 1
        i += 2
    if(flag == 1):
        print("no")
    else:
        print("yes")
    