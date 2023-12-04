class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        stack<int> s;
        int targetIndex = 0;

        for(int i=1; i<=n; i++){
            
            if (targetIndex == target.size()) {
            // The stack is already equal to the target, stop processing.
            break;
            } 
            
            if(i == target[targetIndex]){
                // If the current number matches the target, push.
                s.push(i);
                ans.push_back("Push");
                targetIndex++;
            }

            else{
                // If the current number doesn't matches the target, push and then pop.
                s.push(i);
                ans.push_back("Push");
                ans.push_back("Pop");
                s.pop();
            }
        }
        return ans;
    }
};