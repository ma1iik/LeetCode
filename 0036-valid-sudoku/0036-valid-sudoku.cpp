class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool    cols[9][9] = {false};
        bool    rows[9][9] = {false};
        bool    box[9][9] = {false};

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j <9; j++) {
                int num = board[i][j] - '1';
                if (board[i][j] != '.') {
                    int boxIdx = ((i / 3) * 3) + (j / 3);
                    if (cols[j][num] || rows[i][num] || box[boxIdx][num])
                        return false;
                    cols[j][num] = true;
                    rows[i][num] = true;
                    box[boxIdx][num] = true;
                }
            }
        }
        return true;
    }
};