def subString(Str):
    # Pick starting point
    n = len(Str)
    for Len in range(1,n + 1):
         
        # Pick ending point
        for i in range(n - Len + 1):
             
            # Print characters from current
            # starting point to current ending
            # point.
            j = i + Len - 1
            for k in range(i,j + 1):
                print(Str[k],end=" ")
            print()

subString('abcdef')