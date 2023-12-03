class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // Counting occurrences of each letter in magazine
        unordered_map<char, int> magazineCount;
        for (char c : magazine) {
            magazineCount[c]++;
        }

        // Checking if ransomNote can be constructed
        for (char c : ransomNote) {
            if (magazineCount.find(c) == magazineCount.end() || magazineCount[c] == 0) {
                // The letter is not in magazine or its count is exhausted
                return false;
            }
            magazineCount[c]--; // Use one occurrence of the letter from magazine
        }

        return true;
    }
};