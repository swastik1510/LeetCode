class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left = 0, right = letters.size() - 1;
        // applying binary search
        while (left <= right) {
           
            int mid = left + (right - left) / 2;
            
            if (letters[mid] <= target) {
                left = mid + 1;
            } 
            
            else {
                right = mid - 1;
            }
        }
        
        // If target character does not exist, return the first character in letters
        if (left >= letters.size()) {
            return letters[0];
        }
        
        return letters[left];
    }
};
