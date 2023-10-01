#include <algorithm> // for std::reverse

class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.length();
        
        // Iterate through the string in steps of 2*k
        for (int i = 0; i < n; i += 2 * k) {
            int left = i;
            int right = min(i + k - 1, n - 1);//is used to calculate the rightmost index of the substring that we want to reverse within the string s. 
            
            // Reverse the current k characters
            //s.begin() + left gets an iterator pointing to the start of the substring you want to 
            //s.begin() + right + 1 gets an iterator pointing to the position just after the end of the substring you want to reverse.
            reverse(s.begin() + left, s.begin() + right + 1);
        }
        
        return s;
    }
};
