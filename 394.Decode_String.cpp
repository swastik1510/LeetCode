class Solution {
public:
    string decodeString(string s) {
        stack<int>numStack;
        stack<string>strStack;
        int currentNum = 0;
        string currentStr = "";

        for(char ch : s){
            if(isdigit(ch)){
                // converting string character into number
                currentNum = currentNum * 10 + (ch - '0');
            }

            else if(ch == '['){
                numStack.push(currentNum);
                strStack.push(currentStr);
                currentNum = 0;
                currentStr = "";
            }

            else if(ch == ']'){
                int repeatTimes = numStack.top();
                numStack.pop();

                string prevStr = strStack.top();
                strStack.pop();

                for(int i=0; i<repeatTimes; i++){
                    prevStr += currentStr;
                }

                currentStr = prevStr;

            }

            else{
                currentStr += ch;
            }

        }
            return currentStr;
    }
};