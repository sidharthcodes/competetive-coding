num = 6
ids = [1, 1, 1, 2, 3, 2]
rem = 2
ans = 0
freq = {}

for el in ids:
    if el in freq:
        freq[el] += 1
    else:
        freq[el] = 1

for i in sorted (freq)[::-1]:
    if rem>freq[i]:
        rem -= freq[i]
        ans += 1
    elif rem == freq[i]:
        rem = 0
        ans += 1
        break    

print("SOLN:",ans)
        