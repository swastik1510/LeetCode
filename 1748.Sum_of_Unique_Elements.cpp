class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        // hash map to store the frequency of each element
        unordered_map<int, int> freqMap;

        // Populating the frequency map
        for (int num : nums) {
            freqMap[num]++;
        }

        // Iterating through the array and adding up the unique elements
        int sum = 0;
        for (auto& entry : freqMap) {
            if (entry.second == 1) {
                sum += entry.first;
            }
        }

        return sum;
    }
};
