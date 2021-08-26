# cook your dish here

T = int(input())

for _ in range(T):
    sum = 0
    s = input()
    for el in s:
        if el >= '0' and el <= '9':
            sum += int(el)
    print(sum)