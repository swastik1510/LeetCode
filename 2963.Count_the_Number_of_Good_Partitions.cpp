class Solution {
public:
    int M = 1e9 + 7;
    int numberOfGoodPartitions(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> last_index; //number, last index

        for (int i = 0; i < n; ++i) {
            last_index[nums[i]] = i;
        }

        int i = 0;
        int j = max(0, last_index[nums[0]]);

        int result = 1;
        while(i < n) {
            if(i > j) { //we found one partition
                result = (result*2)%M;
            }

            j = max(j, last_index[nums[i]]);
            i++;
        }

        return result;
    }
};