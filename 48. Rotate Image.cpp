class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        int count = 0;
        // total = row*col;

        for (int i = 0; i < row; i++)
        {
            for (int j = i+1; j < col; j++)
            {
                swap(matrix[j][i], matrix[i][j]);
            }
        }

        for (int i = 0; i < row; ++i)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }

        
    }

}
;