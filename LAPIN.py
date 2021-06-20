# cook your dish here

T = int(input())

for _ in range(T):
    s = input()
    mid = len(s)//2
    h1 = s[:mid]
    if(len(s)%2 == 0):
        h2 = s[mid:]
    else:
        h2 = s[mid+1:]
    freq_dict_1 = {}
    freq_dict_2 = {}
    for el in h1:
        if(el in freq_dict_1):
            freq_dict_1[el] += 1
        else:
            freq_dict_1[el] = 1
    for el in h2:
        if(el in freq_dict_2):
            freq_dict_2[el] += 1
        else:
            freq_dict_2[el] = 1
    if(freq_dict_1 == freq_dict_2):
        print("YES")
    else:
        print("NO")