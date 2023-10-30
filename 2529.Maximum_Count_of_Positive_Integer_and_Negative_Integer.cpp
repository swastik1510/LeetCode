class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int start = 0, end = nums.size()-1,mid, neg_count = 0, pos_count = 0;
        while(start<=end){
            mid = start + (end-start)/2;
            if(nums[mid]<0){
                neg_count = mid+1;
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
        start = 0, end = nums.size()-1;
        while(start <= end){
            mid = start + (end - start)/2;
            if(nums[mid]>0){
                pos_count = nums.size()-mid;
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return max(neg_count,pos_count);
    }
}; 