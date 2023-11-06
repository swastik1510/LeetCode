class Solution {
public:
    int differenceOfSums(int n, int m) {
        // Initialize variables to store the sums
        int num1 = 0;  // Sum of non-divisible numbers
        int num2 = 0;  // Sum of divisible numbers

        // Iterate through numbers from 1 to n
        for (int i = 1; i <= n; i++) {
            if (i % m == 0) {
                // If i is divisible by m, add it to num2
                num2 += i;
            } else {
                // If i is not divisible by m, add it to num1
                num1 += i;
            }
        }

        // Calculate the difference
        int difference = num1 - num2;

        return difference;
    }
};
