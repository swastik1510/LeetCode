class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        // Initialize two boolean flags to true, assuming the array is both increasing and decreasing.
        bool increasing = true;
        bool decreasing = true;

        // Iterate through the elements of the vector, starting from the second element (index 1).
        for (int i = 1; i < nums.size(); i++) {
            // Check if the current element is less than the previous one.
            if (nums[i] < nums[i - 1]) {
                // If it is, set the "increasing" flag to false, indicating that the array is not increasing.
                increasing = false;
            }
            // Check if the current element is greater than the previous one.
            else if (nums[i] > nums[i - 1]) {
                // If it is, set the "decreasing" flag to false, indicating that the array is not decreasing.
                decreasing = false;
            }

            // If both "increasing" and "decreasing" flags become false, it means the array is neither increasing nor decreasing,
            // so it's not monotonic. We return false in this case.
            if (!increasing && !decreasing) {
                return false;
            }
        }

        // If we reach this point, it means that either "increasing" or "decreasing" (or both) is still true,
        // indicating that the array is monotonic in at least one direction (either increasing or decreasing).
        // So, we return true.
        return true;
    }
};
