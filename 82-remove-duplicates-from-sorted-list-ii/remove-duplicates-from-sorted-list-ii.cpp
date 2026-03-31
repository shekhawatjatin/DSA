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
        ListNode* curr = head;
        ListNode* prev = NULL;

        while (curr != NULL) {
            if (curr->next != NULL && curr->val == curr->next->val) {
                int val = curr->val;

                // Skip all duplicates
                while (curr != NULL && curr->val == val) {
                    curr = curr->next;
                }

                // Remove duplicates
                if (prev != NULL) {
                    prev->next = curr;
                } else {
                    head = curr; // duplicates at head
                }
            } else {
                prev = curr;
                curr = curr->next; // ✅ FIXED
            }
        }

        return head;
    }
};