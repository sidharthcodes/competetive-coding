class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        numStack = []
        for token in tokens:
            if token in ["+", "-", "*", "/"]:
                val1 = numStack.pop()
                val2 = numStack.pop()
                if token == "+":
                    val = val1+val2
                elif token == "-":
                    val = val2-val1
                elif token == "*":
                    val = val1*val2
                else:
                    val = int(val2/val1)
                numStack.append(int(val))
            else:
                numStack.append(int(token))
        return numStack.pop()