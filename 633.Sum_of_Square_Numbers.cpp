class Solution {
public:
    bool judgeSquareSum(int c) {
    long left = 0;
    long right = sqrt(c); // Initialize the right boundary with the square root of c

    while (left <= right) {
        long sum = left * left + right * right;
        if (sum == c) {
            return true;
        } else if (sum < c) {
            left++;
        } else {
            right--;
        }
    }

    return false;
}
};