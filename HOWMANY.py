# cook your dish here

N = int(input())

count = 0
while(N):
    count += 1
    N = N//10
if(count>3):
    print("More than 3 digits")
else:
    print(count)