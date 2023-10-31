class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int i = 0, j = s.length() - 1;

        while (i < j) {
            // Finding the first vowel from the beginning
            while (i < j && vowels.find(s[i]) == vowels.end()) {
                i++;
            }

            // Finding the first vowel from the end
            while (i < j && vowels.find(s[j]) == vowels.end()) {
                j--;
            }

            // Swaping the vowels
            if (i < j) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        return s;
    }
};
