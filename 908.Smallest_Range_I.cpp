class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        return max(0, *max_element(nums.begin(), nums.end()) - *min_element(nums.begin(), nums.end()) - 2 * k);
    }
};

// class Solution {
// public:
//     int smallestRangeI(vector<int>& nums, int k) {
//         int min_num = *min_element(nums.begin(), nums.end());
//         int max_num = *max_element(nums.begin(), nums.end());

//         int initial_score = max_num - min_num;
//         int potential_min_score = initial_score - 2 * k;

//         if (potential_min_score < 0) {
//             return 0;
//         } else {
//             return potential_min_score;
//         }
//     }
// };
