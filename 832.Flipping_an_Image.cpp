
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size(); // Assuming the matrix is square (n x n)

        for (int i = 0; i < n; i++) {
            // Reverse the row
            reverse(image[i].begin(), image[i].end());

            // Invert the image
            for (int j = 0; j < n; j++) {
                image[i][j] = 1 - image[i][j];
            }
        }

        return image;
    }
};
