class Solution {
public:
    bool issafe(vector<string>& board, int n, int row, int col) {
        // for (int i = 0; i < n; i++) {
        //     if (board[row][i] == 'Q')
        //         return false;
        // }
        for (int j = 0; j < n; j++) {
            if (board[j][col] == 'Q')
                return false;
        }
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q')
                return false;
        }
        for (int i = row, j = col; i >= 0 &&j < n; i--, j++) {
            if (board[i][j] == 'Q')
                return false;
        }
         return true;
    }
    void nqueen(vector<string>& board, int &count, int n, int row) {
        if (row == n) {
            count++;
            return;
        }
        for (int j = 0; j < n; j++) {
            if (issafe(board, n, row, j)) {
                board[row][j] = 'Q';
                nqueen(board, count, n, row + 1);
                board[row][j] = '.';
            }
        }
       
    }

    int totalNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        int count=0;
        nqueen(board, count, n, 0);
        return count;
    }
};