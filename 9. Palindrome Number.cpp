class Solution {
public:
    bool isPalindrome(int x) {
        
        
        long long rev =0;
        long long original = x;
        while(x !=0){
            long long num = x % 10;
            rev = rev *10 + num;
            x = x/10;

        }

        if(original >= 0 && original == rev){
            return true;
        }

        return false;
    }
};