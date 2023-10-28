class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = s.size();
        string shuffled(n, ' '); // Create a string of the same length with placeholder spaces
        for (int i = 0; i < n; i++) {
            shuffled[indices[i]] = s[i]; // Placing characters at the specified indices
        }
        
        return shuffled;
    }
};