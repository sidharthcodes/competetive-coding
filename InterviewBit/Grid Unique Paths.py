import math
def uniquePaths(A, B):
        f1 = math.factorial(A+B-2)
        f2 = math.factorial(B-1)
        f3 = math.factorial(A-1)
        #print(f1,f2,f3)
        ans = int(f1/(f2*f3))
        return ans
