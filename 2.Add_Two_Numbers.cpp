/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Create a dummy node to simplify the code
        ListNode* dummy = new ListNode();
        // Initialize a pointer to the current node, starting at the dummy node
        ListNode* current = dummy;
        // Initialize a variable to track the carry
        int carry = 0;

        // Iterate through the linked lists until both are exhausted and there is no carry
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            // Calculate the sum, starting with the current carry
            int sum = carry;

            // Add the value of the current node in l1 if it exists
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;  // Move to the next node in l1
            }

            // Add the value of the current node in l2 if it exists
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;  // Move to the next node in l2
            }

            // Calculate the digit to be added to the result linked list
            int digit = sum % 10;
            // Update the carry for the next iteration
            carry = sum / 10;

            // Create a new node with the calculated digit and add it to the result linked list
            current->next = new ListNode(digit);
            current = current->next;  // Move to the next node in the result linked list
        }

        // Return the result linked list (excluding the dummy node)
        return dummy->next;
    }
};
