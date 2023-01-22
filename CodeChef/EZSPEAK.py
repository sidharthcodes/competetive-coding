testCase = int(input())
vowels = ['a','e','i','o','u']
for _ in range(testCase):
    num = int(input())
    word = input()
    flag = 0
    for ch in word:
        #print(ch, end='')
        if ch in vowels:
            flag = 0
        else:
            flag += 1
        if flag == 4:
            print("NO")
            break
    if flag < 4:
        print("YES")