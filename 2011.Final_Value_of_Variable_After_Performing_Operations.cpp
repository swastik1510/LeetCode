class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0;  

        for (int i = 0; i < operations.size(); i++) {
            string op = operations[i];  // Getting the operation at the current index

            if (op == "++X" || op == "X++") {
                X = X + 1;  // Increment X by 1
            } else {
                X = X - 1;  // Decrement X by 1
            }
        }

        return X;  // Return the final value of X after all the operations
    }
};
