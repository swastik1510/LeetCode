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

/* APPROACH 1:

class Solution {

private:
    bool checkPalindrome(vector<int> arr){

        int n=arr.size();
        int s=0;
        int e=n-1;
        while(s<=e){
            if(arr[s] != arr[e]){
                return false;
            }
            s++;
            e--;
        }
        return true;
    }

public:
    bool isPalindrome(ListNode* head) {
        vector<int> arr;

        ListNode* temp = head;
        while(temp != nullptr){
            arr.push_back(temp -> val);
            temp = temp -> next;
        }
        return checkPalindrome(arr);
    }
};*/


// APPROACH 2:

class Solution{
  private:
    ListNode* getMid(ListNode* head ) {
        ListNode* slow = head;
        ListNode* fast = head -> next;
        
        while(fast != nullptr && fast-> next != nullptr) {
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        
        return slow;
    }
    ListNode* reverse(ListNode* head) {
        
        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        
        while(curr != nullptr) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(ListNode *head)
    {
        if(head -> next == nullptr) {
            return true;
        }
        
        //step 1 -> find Middle
        ListNode* middle = getMid(head);
        //cout << "Middle " << middle->data << endl;
        
        //step2 -> reverse List after Middle
        ListNode* temp = middle -> next;
        middle -> next = reverse(temp);
        
        //step3 - Compare both halves
        ListNode* head1 = head;
        ListNode* head2 = middle -> next;
        
        while(head2 != nullptr) {
            if(head2->val != head1->val) {
                return 0;
            }
            head1 = head1 -> next;
            head2 = head2 -> next;
        }
    
        //step4 - repeat step 2
        temp = middle -> next;
        middle -> next = reverse(temp);
        
        return true;
    }
};