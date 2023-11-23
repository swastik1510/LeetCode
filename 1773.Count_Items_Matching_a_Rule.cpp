class Solution {
public:
    int countMatches(vector<vector<std::string>>& items, string ruleKey, string ruleValue) {
        int count = 0;

        // Creating a map to map ruleKey to index
        unordered_map<string, int> keyToIndex = {{"type", 0}, {"color", 1}, {"name", 2}};

        int index = keyToIndex[ruleKey];

        for (const auto& item : items) {
            if (ruleValue == item[index]) {
                count++;
            }
        }

        return count;
    }
};
