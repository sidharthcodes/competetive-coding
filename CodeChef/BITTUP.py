# cook your dish here

T = int(input())
for i in range(T):
    data = input()
    str_a, str_b = data.split()
    a = int(str_a)
    b = int(str_b)
    c = pow(2,a,1000000007)-1
    req_ans = pow(c,b,1000000007)
    print(req_ans)