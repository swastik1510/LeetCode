class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans{-1, -1};
        int n = nums.size();
        int start = 0;
        int end = n - 1;
        int mid;

        // Binary search to find the starting position of target
        while (start <= end) {
            mid = start + (end - start) / 2; // Calculate mid without the risk of integer overflow

            if (nums[mid] >= target) { // If target is less than or equal to nums[mid], search the left half
                end = mid - 1;
            } else { // If target is greater than nums[mid], search the right half
                start = mid + 1;
            }

            if (nums[mid] == target) { // Update ans if target is found
                ans[0] = mid;
            }
        }

        start = 0; // Reset start and end for the second binary search
        end = n - 1;

        // Binary search to find the ending position of target
        while (start <= end) {
            mid = start + (end - start) / 2;

            if (nums[mid] <= target) { // If target is greater than or equal to nums[mid], search the right half
                start = mid + 1;
            } else { // If target is less than nums[mid], search the left half
                end = mid - 1;
            }

            if (nums[mid] == target) { // Update ans if target is found
                ans[1] = mid;
            }
        }

        return ans;
    }
};
