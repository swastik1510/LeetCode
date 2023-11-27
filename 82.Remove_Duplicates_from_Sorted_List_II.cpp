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
    ListNode* deleteDuplicates(ListNode* head) {
        // empty list
        if (head == nullptr) {
            return nullptr;
        }

        // non-empty list
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* curr = head;

        while (curr != nullptr) {

            // Check if duplicates are found
            bool isDuplicate = false;
            while (curr->next != nullptr && curr->val == curr->next->val) {
                curr = curr->next;
                isDuplicate = true;
            }

            if (isDuplicate) {
                // Skip duplicates without deleting to avoid memory leaks
                prev->next = curr->next;
            } else {
                // Move to the next distinct element
                prev = prev->next;
            }

            // Move to the next element in the original list
            curr = curr->next;
        }

        // Return the modified list starting from dummy->next
        return dummy->next;
    }
};
