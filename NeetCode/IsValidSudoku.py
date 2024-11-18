class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        for i in range(9):
            check = {}
            for j in range(9):
                if board[i][j] != '.' and board[i][j] in check:
                    return False
                else:
                    check[board[i][j]] = 1
        for i in range(9):
            check = {}
            for j in range(9):
                print(board[j][i],end=' ')
                if board[j][i] != '.' and board[j][i] in check:
                    return False
                else:
                    check[board[j][i]] = 1
        for k in range(9):
            check = {}
            for i in range(3):
                for j in range(3):
                    row = (k//3) * 3 + i
                    col = (k % 3) * 3 + j
                    if board[row][col] != "." and board[row][col] in check:
                        return False
                    else:
                        check[board[row][col]] = 1
        return True