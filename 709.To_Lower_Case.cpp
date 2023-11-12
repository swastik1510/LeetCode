#include <string>
#include <algorithm>

class Solution {
public:
    string toLowerCase(string s) {
        // Converting the string to lowercase
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);
        
        return s; 
    }
};

// #include <string>

// class Solution {
// public:
//     string toLowerCase(string s) {
//         for (int i = 0; i < s.length(); i++) {
//             if (s[i] >= 'A' && s[i] <= 'Z') {
//                 // converting uppercase character to lowercase
//                 s[i] = s[i] - 'A' + 'a';
//             }
//         }
//         return s; 
//     }
// };
