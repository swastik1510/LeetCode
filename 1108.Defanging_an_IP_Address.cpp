class Solution {
public:
    string defangIPaddr(string address) {
        string defangedIP;
        
        for (char c : address) {
            if (c == '.') {
                defangedIP += "[.]";
            } else {
                defangedIP += c;
            }
        }
        
        return defangedIP;
    }
};
