class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int maxLeft = 0;
        int minRight = n;

        if (!left.empty()) {
            maxLeft = *max_element(left.begin(), left.end());
        }

        if (!right.empty()) {
            minRight = *min_element(right.begin(), right.end());
        }

        return max(maxLeft, n - minRight);
    }
};
