# cook your dish here

T = int(input())

for i in range(T):
    result = {}
    s = input()
    #print(s)
    
    for letter in s:
        if letter in result:
            result[letter] += 1
        else:
            result[letter] = 1
    #print(result)
    
    max = 0
    sum = 0
    for key, value in result.items():
        #print("key: "+ str(key) + " value: " + str(value))
        sum += value
        if(value>max):
            sum -= value
            sum += max
            max = value
    
    if(max == sum):
        print("YES");
    else:
        print("NO");
    
    