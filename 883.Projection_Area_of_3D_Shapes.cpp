class Solution {
public:
    int projectionArea(std::vector<std::vector<int>>& grid) {
        int n = grid.size();
        int xyProjection = 0;
        int xzProjection = 0;
        int yzProjection = 0;

        for (int i = 0; i < n; ++i) {
            int maxRow = 0;
            int maxCol = 0;

            for (int j = 0; j < n; ++j) {
                if (grid[i][j] > 0) {
                    xyProjection++; // Counting for the shadow on the xy-plane
                }
                maxRow = std::max(maxRow, grid[i][j]);
                maxCol = std::max(maxCol, grid[j][i]);
            }

            xzProjection += maxRow; // Counting for the shadow on the xz-plane
            yzProjection += maxCol; // Counting for the shadow on the yz-plane
        }

        return xyProjection + xzProjection + yzProjection;
    }
};