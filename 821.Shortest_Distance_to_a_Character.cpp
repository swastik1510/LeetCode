#include <vector>
#include <climits>

class Solution {
public:
    vector<int> shortestToChar(std::string s, char c) {
        int n = s.length();
        std::vector<int> result(n, INT_MAX);

        // Iterate from left to right
        int pos = -1;
        for (int i = 0; i < n; ++i) {
            if (s[i] == c) {
                pos = i;
            }
            if (pos != -1) {
                result[i] = std::min(result[i], abs(i - pos));
            }
        }

        // Iterate from right to left
        pos = -1;
        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == c) {
                pos = i;
            }
            if (pos != -1) {
                result[i] = std::min(result[i], abs(i - pos));
            }
        }

        return result;
    }
};
