class Solution {
public:
    bool isPowerOfFour(int n) {
        //base case
        if (n <= 0) {
            return false;
        }
        if (n == 1) {
            return true;
        }
        // Checking if n is divisible by 4 and continue with n/4
        if (n % 4 == 0) {
            return isPowerOfFour(n / 4);
        }
        return false;
    }
};