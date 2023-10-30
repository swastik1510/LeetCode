class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;

        while(start < end){

            int mid = start + (end - start)/2;

            // If the middle element is greater than the last element,
            // it means the minimum element is in the right half.
            if(nums[mid] > nums[end]){
                 start = mid + 1; 
            }

            // If the middle element is less than the last element,
            // it means the minimum element is in the left half.
            else if(nums[mid] < nums[end]){
                end = mid;
            }
            // If they are equal, we will safely exclude the last element 
            // and continue the search.
            else{
                end--;
            }

        }
        // The minimum element will be at start index
        return nums[start];
    }
};