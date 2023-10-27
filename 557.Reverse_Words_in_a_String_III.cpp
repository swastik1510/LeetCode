class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int start = 0;
        int end = 0;
        
        while (end < n) {
          
            while (end < n && s[end] != ' ') {
                end++;
            }
            
            // reverse(s.begin() + start, s.begin() + end); effectively reverses the characters in the range specified by the iterators s.begin() + start and s.begin() + end. This means it reverses the characters from the start of the current word to the character just before the end of the current word.
            reverse(s.begin() + start, s.begin() + end);
          
            while (end < n && s[end] == ' ') {
                end++;
            }
            
            start = end;
        }
        
        return s;
    }
};
