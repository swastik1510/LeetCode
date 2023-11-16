class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count = 0; 
        for (int num : arr) {
            if (num % 2 == 1) { 
                count++;
                if (count == 3) {
                    return true; 
                }
            } else {
                count = 0; // Resetting the counter if an even number is encountered
            }
        }
        return false; 
    }
};
