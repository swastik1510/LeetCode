class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        // Get the number of rows and columns in the grid.
        int rows = grid.size();
        int cols = grid[0].size();
        
        // Initialize variables to keep track of the count, current row, and current column.
        int count = 0;
        int row = 0;
        int col = cols - 1;
        
        // Start from the top-right corner of the grid and move left and down.
        while (row < rows && col >= 0) {
            if (grid[row][col] < 0) {
                // If the current element is negative, all elements to the left in the row are also negative.
                // Increment the count by the number of elements to the left in the current row.
                count += (rows - row);
                col--;  // Move to the previous column.
            } else {
                // If the current element is non-negative, move to the next row (downward).
                row++;
            }
        }
        
        return count;  // Return the total count of negative numbers in the grid.
    }
};
