class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
           int n = nums.size(); // Get the size of the input array
        int totalSum = accumulate(nums.begin(), nums.end(), 0); // Compute the sum of all elements in the array
        int leftSum = 0; // Initialize left sum to 0
        for(int i = 0; i < n; i++){ // Loop through each index in the array
            if(leftSum == totalSum - leftSum - nums[i]){ // Check if the left sum equals the right sum
                return i; // Return the pivot index if found
            }
            leftSum += nums[i]; // Update the left sum by adding the current element to it
        }
        return -1; // Return -1 if no pivot index is found
      
    }
};