#include <iostream>
#include <algorithm>
#include <vector>

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        for (int i = 1; i < gain.size(); i++) {
            gain[i] = gain[i] + gain[i - 1];
        }
        
        int maxElement = *std::max_element(gain.begin(), gain.end());
        if(maxElement < 0){
            return 0;
        }

        return maxElement;
    }
};
