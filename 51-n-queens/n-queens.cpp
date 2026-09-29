
class Solution {
public:
    bool lefty(vector<string>& board, int r, int c, int n) {
        while (r >= 0 && c >= 0) {
            if (board[r][c] == 'Q') {
                return false;
            }
            r--;
            c--;
        }
        return true;
    }

    bool righty(vector<string>& board, int r, int c, int n) {
        while (r >= 0 && c < n) {
            if (board[r][c] == 'Q') {
                return false;
            }
            r--;
            c++;
        }
        return true;
    }

    bool colcheck(vector<string>& board, int r, int c) {
        for (int i = 0; i < r; i++) {
            if (board[i][c] == 'Q') {
                return false;
            }
        }
        return true;
    }

    void bactrack(vector<string>& board,
                   vector<vector<string>>& ans,
                   int r, int n) {
        if (r == n) {
            ans.push_back(board);
            return;
        }

        for (int c = 0; c < n; c++) {
            if (lefty(board, r-1, c-1, n) &&
                righty(board, r-1, c+1, n) &&
                colcheck(board, r, c)) {

                board[r][c] = 'Q';
                bactrack(board, ans, r + 1, n);
                board[r][c] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        vector<vector<string>> ans;

        bactrack(board, ans, 0, n);

        return ans;
    }
};