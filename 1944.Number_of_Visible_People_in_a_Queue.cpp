class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n = heights.size();
        vector<int> result(n, 0);
        stack<int> s;

        for (int i = n - 1; i >= 0; --i) {
            while (!s.empty() && heights[i] > heights[s.top()]) {
                // The person at index i can see the person at the top of the stack
                result[i]++;
                s.pop();
            }

            if (!s.empty()) {
                // The person at index i can also see the person at the top of the stack
                result[i]++;
            }

            // Add the current person to the stack
            s.push(i);
        }

        return result;
    }
};