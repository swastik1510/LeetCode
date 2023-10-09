#include <algorithm>
#include <vector>

class Solution {
public:

    int maximumGap(vector<int>& nums) {
    
    int n=nums.size();

    int maxi=0;
    
    if (n < 2){
        return 0;
    }
    
    sort(nums.begin(), nums.end());
    
    for(int i=1; i<n; i++){
        int diff = nums[i]-nums[i-1];
        maxi = max(maxi, diff);
    
    }

    return maxi;
    }
};