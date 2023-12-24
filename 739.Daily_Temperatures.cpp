class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> st; // {temperature, index}
        int n = temperatures.size();
        vector<int> result(n, 0);

        for (int i = 0; i < n; i++) {
            while (!st.empty() && temperatures[i] > st.top().first) {
                int idx = st.top().second;
                st.pop();
                result[idx] = i - idx;
            }
            st.push({temperatures[i], i});
        }

        return result;
    }
};