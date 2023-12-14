class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        
        if (n <= 2) {
            return n;
        }

        int count = 1;
        int i=1;
        for(int j=1; j<nums.size(); j++){
            if(nums[j] == nums[j-1]){
                count++;
            }
            else{
                count = 1;
            }

            if(count <= 2){
                nums[i] = nums[j];
                i++;
            }
        }
    return i;
    }
};