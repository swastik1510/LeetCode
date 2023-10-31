class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        
        int num = 1; // Initialize the number to be filled in the matrix

        // Index initialization 
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = n - 1;
        int endingCol = n - 1;
        
        while(num <= n*n){
            // Filling the top row from left to right
            for(int i = startingCol; i <= endingCol; i++){
                matrix[startingRow][i] = num;
                num++;
            }
            startingRow++;
            
            // Filling the rightmost column from top to bottom
            for(int i = startingRow; i <= endingRow; i++){
                matrix[i][endingCol] = num;
                num++;
            }
            endingCol--;
            
            // Filling the bottom row from right to left
            for(int i = endingCol; i >= startingCol; i--){
                matrix[endingRow][i] = num;
                num++;
            }
            endingRow--;

            // Filling the leftmost column from bottom to top
            for(int i = endingRow; i >= startingRow; i--){
                matrix[i][startingCol] = num;
                num++;
            }
            startingCol++;
        }
        
        return matrix;
    }
};
