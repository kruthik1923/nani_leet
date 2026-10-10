class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int r = board.size();
        int c = board[0].size();

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                int alive = 0, dead = 0;

                if (i-1 >= 0) {
                    if (board[i-1][j] == 1 || board[i-1][j] == 2) alive++;
                    else dead++;
                }
                if (i+1 < r) {
                    if (board[i+1][j] == 1 || board[i+1][j] == 2) alive++;
                    else dead++;
                }
                if (j-1 >= 0) {
                    if (board[i][j-1] == 1 || board[i][j-1] == 2) alive++;
                    else dead++;
                }
                if (j+1 < c) {
                    if (board[i][j+1] == 1 || board[i][j+1] == 2) alive++;
                    else dead++;
                }
                if (i-1 >= 0 && j-1 >= 0) {
                    if (board[i-1][j-1] == 1 || board[i-1][j-1] == 2) alive++;
                    else dead++;
                }
                if (i+1 < r && j+1 < c) {
                    if (board[i+1][j+1] == 1 || board[i+1][j+1] == 2) alive++;
                    else dead++;
                }
                if (i-1 >= 0 && j+1 < c) {
                    if (board[i-1][j+1] == 1 || board[i-1][j+1] == 2) alive++;
                    else dead++;
                }
                if (i+1 < r && j-1 >= 0) {
                    if (board[i+1][j-1] == 1 || board[i+1][j-1] == 2) alive++;
                    else dead++;
                }

                if (board[i][j] == 1) {
                    if (alive < 2 || alive > 3)
                        board[i][j] = 2;
                } else if (board[i][j] == 0) {
                    if (alive == 3)
                        board[i][j] = 3;
                }
            }
        }

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (board[i][j] == 2) board[i][j] = 0;
                else if (board[i][j] == 3) board[i][j] = 1;
            }
        }
    }
};