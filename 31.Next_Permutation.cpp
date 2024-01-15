class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int n = nums.size();
        int chosen_index = -1;
        for(int i=n-1; i>0;i--){
            if(nums[i] > nums[i-1]){
                chosen_index = i-1;
                break;
            }
        }

        if(chosen_index != -1){
        int swap_index = chosen_index;
        for(int j=n-1; j>chosen_index; j--){
            if(nums[j]> nums[chosen_index]){
                swap_index = j;
                break;
            }
        }

        swap(nums[chosen_index], nums[swap_index]);
        }

        reverse(nums.begin()+ chosen_index + 1, nums.end());


    }
};