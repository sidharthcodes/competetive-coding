# cook your dish here

T = int(input())

for _ in range(T):
    s1 = input()
    s2 = input()
    i = 0
    a_min = 0
    a = 0
    while(i < len(s1)):
        if(s1[i]==s2[i] and s1[i]!='?' and s2[i]!='?'):
            a += 1;
        if(s1[i]!=s2[i] and s1[i]!='?' and s2[i]!='?'):
            a_min += 1
        i += 1
    print(a_min, i-a)