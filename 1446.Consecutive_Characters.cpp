class Solution {
public:
    int maxPower(string s) {
        if (s.empty()) {
            return 0;
        }

        int maxPower = 1;  // Minimum power is 1 for a non-empty string
        int currentPower = 1;

        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) {
                currentPower++;
                maxPower = max(maxPower, currentPower);
            } else {
                currentPower = 1;
            }
        }

        return maxPower;
    }
};
