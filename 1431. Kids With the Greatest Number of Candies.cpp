class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector<bool> result;
        int n = candies.size();
        int maxi = *max_element(candies.begin(), candies.end());
        
       for(int i = 0 ; i < n; i++){
            result.push_back(candies[i] + extraCandies >= maxi);
        }  
        return result;  
    }
};