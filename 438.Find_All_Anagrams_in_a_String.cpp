class Solution {
public:
    bool allZero(vector<int>& count) {
        return count == vector<int>(26, 0);
    }

    vector<int> findAnagrams(string s, string p) {
        int k = p.size();
        vector<int> count(26, 0);
        for (char &ch : p) {
            count[ch - 'a']++;
        }
        
        int i = 0, j = 0;
        int n = s.size();
        vector<int> result;
        while (j < n) {
            int idx = s[j] - 'a';
            count[idx]--;

            if (j - i + 1 == k) {
                if (allZero(count)) {
                    result.push_back(i);
                }

                // Move the window by incrementing i
                count[s[i] - 'a']++;
                i++;
            }
            j++;
        }
        return result;
    }
};