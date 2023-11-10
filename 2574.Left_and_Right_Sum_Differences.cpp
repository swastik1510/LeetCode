
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftSum(n, 0);
        vector<int> rightSum(n, 0);

        // Calculating the left sum for each index
        int runningSum = 0;
        for (int i = 0; i < n; i++) {
            leftSum[i] = runningSum;
            runningSum += nums[i];
        }

        // Calculating the right sum for each index
        runningSum = 0;
        for (int i = n - 1; i >= 0; i--) {
            rightSum[i] = runningSum;
            runningSum += nums[i];
        }

        vector<int> answer(n);

        // Calculating the absolute difference
        for (int i = 0; i < n; i++) {
            answer[i] = abs(leftSum[i] - rightSum[i]);
        }

        return answer;
    }
};
