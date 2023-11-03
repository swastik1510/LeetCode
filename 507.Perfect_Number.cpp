class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num <= 1) {
            return false;
        }

        int divisors_sum = 1;  // Starting with 1 because 1 is a divisor for all positive integers

        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                divisors_sum += i;
                if (i != num / i) {  // Avoids adding the same divisor twice for perfect squares
                    divisors_sum += num / i;
                }
            }
        }

        return divisors_sum == num;
    }
};
