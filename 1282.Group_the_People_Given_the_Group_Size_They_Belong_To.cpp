#include <vector>
#include <unordered_map>

class Solution {
public:
    vector<std::vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> result;  // Local variable to store the result
        unordered_map<int, vector<int>> groups;

        for (int i = 0; i < groupSizes.size(); ++i) {
            int size = groupSizes[i];

            if (groups.find(size) == groups.end()) {
                groups[size] = {};  // Initializing an empty vector for the group size if not exists
            }

            groups[size].push_back(i);  // Add person i to the corresponding group

            if (groups[size].size() == size) {
                // If the group is full, add it to the result and empty the group
                // we can return the result directly here if you don't need to keep the order
                result.push_back(groups[size]);
                groups[size].clear();
            }
        }

        return result;
    }
};
