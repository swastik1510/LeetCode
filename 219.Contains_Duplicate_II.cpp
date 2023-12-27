class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        int i=0, j=0;
        unordered_set<int>set;
        while(j < n){
            // step 1 -
            if(abs(i - j) > k){
                set.erase(nums[i]);
                i++;
            }
            
            // step 2 -
            // past mein nums[j] dekha h?
            if(set.find(nums[j]) != set.end()){
                return true;
            }

            set.insert(nums[j]);
            j++;
        }

        return false;
    }
};