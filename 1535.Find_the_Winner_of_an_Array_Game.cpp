class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int currentWinner = arr[0];
        int consecutiveRounds = 0;

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > currentWinner) {
                currentWinner = arr[i];
                consecutiveRounds = 1;
            } else {
                consecutiveRounds++;
            }

            if (consecutiveRounds == k) {
                return currentWinner;
            }
        }

        // If we reach this point, the first element is the winner
        return currentWinner;
    }
};
