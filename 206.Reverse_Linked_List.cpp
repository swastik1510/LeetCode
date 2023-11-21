/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     LisxtNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* current = head;
        ListNode* next = nullptr;

        while (current != nullptr) {
            next = current->next; // Saving the next node
            current->next = prev; // Reverse the link

            // Moving one step forward in the list
            prev = current;
            current = next;
        }

        // At the end, prev will be the new head of the reversed list
        return prev;
    }
};

