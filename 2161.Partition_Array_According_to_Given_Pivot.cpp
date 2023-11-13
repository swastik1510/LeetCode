class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> result(nums.size());
        int index = 0;

        // First pass: Place elements less than pivot at the beginning of the result array.
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < pivot) {
                result[index] = nums[i];
                index++;
            }
        }

        // Second pass: Place elements equal to pivot in between.
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == pivot) {
                result[index] = nums[i];
                index++;
            }
        }

        // Third pass: Place elements greater than pivot at the end of the result array.
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > pivot) {
                result[index] = nums[i];
                index++;
            }
        }

        return result;
    }
};
