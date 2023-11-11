class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int n = seats.size();
        
        // Sorting the arrays in ascending order.
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        
        int minMoves = 0;
        
        // Iterating through both arrays and calculate moves.
        for (int i = 0; i < n; i++) {
            minMoves += abs(seats[i] - students[i]);
        }
        
        return minMoves;
    }
};
