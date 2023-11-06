class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
    // if rec1 is to the left of rec2 or if rec1 is to the right of rec2
    if (rec1[2] <= rec2[0] || rec2[2] <= rec1[0]) {
        return false; // They don't overlap on the x-axis
    }

    // if rec1 is below rec2 or if rec1 is above rec2
    if (rec1[3] <= rec2[1] || rec2[3] <= rec1[1]) {
        return false; // They don't overlap on the y-axis
    }

    // If none of the above conditions are met, the rectangles overlap
    return true;
}

};