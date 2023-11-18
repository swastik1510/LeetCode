class Solution {
public:
    int arrangeCoins(int n) {
        long long left = 0;
        long long right = n;

        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long totalCoins = mid * (mid + 1) / 2;

            if (totalCoins == n) {
                return static_cast<int>(mid);
            } else if (totalCoins < n) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return static_cast<int>(right); // Returning the number of complete rows
    }
};
