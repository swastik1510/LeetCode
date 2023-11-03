class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        // Sort the input vector in non-decreasing order.
        sort(nums.begin(), nums.end());
        
        // Calculating two possible products:
        // 1. The product of the three largest numbers.
        // 2. The product of the two smallest numbers (which could be negative) and the largest number.
        int product1 = nums[n - 1] * nums[n - 2] * nums[n - 3];
        int product2 = nums[0] * nums[1] * nums[n - 1];

        // Return the maximum of the two products.
        return max(product1, product2);
    }
};
