/* STACK APPROACH
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        int n = s.length();
        string result = "";

        for(int i=0;i<n;i++){
            if(st.empty() || st.top() != s[i]){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
        }

        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }

        reverse(result.begin(), result.end());
        return result;
    }
};*/

class Solution {
public:
    string removeDuplicates(string s) {
        string result = "";

        for (char c : s) {
            if (!result.empty() && result.back() == c) {
                result.pop_back();
            } else {
                result.push_back(c);
            }
        }

        return result;
    }
};
