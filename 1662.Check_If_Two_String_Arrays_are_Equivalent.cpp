class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int i = 0; // Index for word1
        int j = 0; // Index for word2
        int m = 0; // Index for the current character in word1
        int n = 0; // Index for the current character in word2

        while (i < word1.size() && j < word2.size()) {
            if (word1[i][m] != word2[j][n]) {
                return false;
            }

            m++;
            n++;

            // Move to the next word if we've reached the end of the current word
            if (m == word1[i].size()) {
                i++;
                m = 0;
            }
            if (n == word2[j].size()) {
                j++;
                n = 0;
            }
        }

        // Make sure both vectors are fully processed
        return i == word1.size() && j == word2.size();
    }
};