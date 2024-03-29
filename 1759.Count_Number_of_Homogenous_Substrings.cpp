class Solution {
public:
    int MOD = 1e9+7;
    
    int countHomogenous(string s) {
        int n = s.length();
        int ans = 0;
        int count  = 0;
        
        for(int i = 0; i<n; i++) {
            if(i > 0 && s[i] == s[i-1]) {
                count++;
            } else {
                count = 1;
            }
            
            ans = (ans + count) % MOD;
        }
        
        return ans;
    }
};

