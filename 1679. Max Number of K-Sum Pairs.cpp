class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = nums.size()-1;
        int count = 0;
        
        while(left < right){
            int sum = nums[left] + nums[right];
            if(sum == k){
                count++;
                left++;
                right--;
            }
            
            else if(sum < k){
                left++;
            }

            else{
                right--;
            }
            
        }return count;
        }
};

//solve this ques with hash map coz its more optimized 
//this code is in o(nlogn) complexity but with hash map you can code it in o(n) 