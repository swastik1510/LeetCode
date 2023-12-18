class Solution {
public:
    bool closeStrings(string word1, string word2) {

        int m = word1.length();
        int n = word2.length();
        
        if(m!=n){
            return false;
        }
        // Initialize frequency vectors with size 26
        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);

        for (int i = 0; i < m; i++) {
            char ch1 = word1[i];
            char ch2 = word2[i]; 

            int index1 = ch1 - 'a';
            int index2 = ch2 - 'a';

            freq1[index1]++;
            freq2[index2]++;
        }

        // 1st point - jo char word1 mein hai woh char word2 mein bhi hona chahiye
        for (int i = 0; i < 26; i++) {
            if ((freq1[i] != 0 && freq2[i] != 0) || (freq1[i] == 0 && freq2[i] == 0)) {
                continue;
            }

            return false;
        }

        // 2nd point - match freq
        sort(begin(freq1), end(freq1));
        sort(begin(freq2), end(freq2));

        return freq1 == freq2;
    }
};
