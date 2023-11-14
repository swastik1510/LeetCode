class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        vector<vector<int>> result;
        bool chessboard[8][8] = {false};

        // Mark the positions of the black queens
        for (const auto& queen : queens) {
            chessboard[queen[0]][queen[1]] = true;
        }

        // Check for black queens in each of the 8 possible directions
        for (int i = king[0] - 1; i >= 0; --i) {
            if (chessboard[i][king[1]]) {
                result.push_back({i, king[1]});
                break;
            }
        }
        for (int i = king[0] + 1; i < 8; ++i) {
            if (chessboard[i][king[1]]) {
                result.push_back({i, king[1]});
                break;
            }
        }
        for (int i = king[1] - 1; i >= 0; --i) {
            if (chessboard[king[0]][i]) {
                result.push_back({king[0], i});
                break;
            }
        }
        for (int i = king[1] + 1; i < 8; ++i) {
            if (chessboard[king[0]][i]) {
                result.push_back({king[0], i});
                break;
            }
        }
        for (int i = king[0] - 1, j = king[1] - 1; i >= 0 && j >= 0; --i, --j) {
            if (chessboard[i][j]) {
                result.push_back({i, j});
                break;
            }
        }
        for (int i = king[0] - 1, j = king[1] + 1; i >= 0 && j < 8; --i, ++j) {
            if (chessboard[i][j]) {
                result.push_back({i, j});
                break;
            }
        }
        for (int i = king[0] + 1, j = king[1] - 1; i < 8 && j >= 0; ++i, --j) {
            if (chessboard[i][j]) {
                result.push_back({i, j});
                break;
            }
        }
        for (int i = king[0] + 1, j = king[1] + 1; i < 8 && j < 8; ++i, ++j) {
            if (chessboard[i][j]) {
                result.push_back({i, j});
                break;
            }
        }

        return result;
    }
};