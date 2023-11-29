class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        // Creating a set to store the types of jewels for efficient lookup
        unordered_set<char> jewelSet(jewels.begin(), jewels.end());
        
        // Counting the number of stones that are also jewels
        int count = 0;
        for (char stone : stones) {
            if (jewelSet.count(stone) > 0) {
                count++;
            }
        }
        
        return count;
    }
};
