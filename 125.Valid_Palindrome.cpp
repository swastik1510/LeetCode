class Solution {
private:
    bool valid(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            return true;
        }
        return false;
    }

  

    bool checkPalindrome(string a) {
        int s = 0;
        int e = a.length() - 1;
        while (s <= e) {
            if (a[s] != a[e]) {
                return false;
            }
            s++;
            e--;
        }
        return true;
    }

public:
    bool isPalindrome(string s) {
        string temp = "";
        for (int i = 0; i < s.length(); i++) {
            if (valid(s[i])) {
                temp.push_back(tolower(s[i]));
            }
        }
        return checkPalindrome(temp);
    }
};
