class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
        int n = v.size();
        int carry = 1;
        for(int i = n-1 ;i >= 0; i--){
            int sum = v[i] + carry;
            if(sum == 10){
                v[i] = 0;
                carry = 1;
            } else {
                v[i] = sum;
                carry = 0;
                break;
            }
        }
        if(carry == 1) {
            v.insert(v.begin(), 1);
        }
        return v;
    }
};
