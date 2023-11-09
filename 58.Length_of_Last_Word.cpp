class Solution {
public:
    int lengthOfLastWord(string s) {
  
        int len = s.length();
        int lastWordLength = 0;

        // Iterating from the end of the string, skipping trailing spaces.
        for (int i = len - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                // Found the last word's character, so increment the length.
                lastWordLength++;
            } else if (lastWordLength > 0) {
                // If we've found the last word's characters and encountered a space,
                // then we've reached the end of the last word and then Break the loop.
                break;
            }
        }

        return lastWordLength;
    }
};
