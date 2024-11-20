class Solution:
    def isValid(self, s: str) -> bool:
        parDict = {")" : "(", "]" : "[", "}" : "{"}
        myStack = []
        for each in s:
            if each in parDict:
                if myStack and myStack[-1] == parDict[each]:
                    myStack.pop()
                else:
                    return False
            else:
                myStack.append(each)
        if myStack:
            return False
        else:
            return True