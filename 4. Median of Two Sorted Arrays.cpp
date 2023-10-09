class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result(nums1.size() + nums2.size());
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), result.begin());
        sort(result.begin(),result.end());

        int totalSize = result.size();

        int midIndex = totalSize / 2;
        
         if (totalSize % 2 == 0) {
            // Even number of elements, return the average of two middle elements
            return (static_cast<double>(result[midIndex - 1]) + result[midIndex]) / 2.0;
        } else {
            // Odd number of elements, return the middle element
            return result[midIndex];
        }  
    }
};