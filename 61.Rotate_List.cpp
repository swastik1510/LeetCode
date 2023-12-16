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
    // Fixing the declaration and adding a return type.
    ListNode* findNthNode(ListNode* temp, int k) {
        int count = 1;
        while (temp->next != nullptr) {
            if (count == k) {
                return temp;
            }
            count++;
            temp = temp->next;
        }
        return temp;
    }

public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || k == 0) {
            return head;
        }

        // Getting tail and length of list
        ListNode* tail = head;
        int len = 1;
        while (tail->next != nullptr) {
            tail = tail->next;
            len++;
        }

        if (k % len == 0) {
            return head;
        }

        k = k % len;

        tail->next = head;

        // Correcting the function name
        ListNode* newLastNode = findNthNode(head, len - k);

        head = newLastNode->next;
        newLastNode->next = nullptr;

        return head;
    }
};
