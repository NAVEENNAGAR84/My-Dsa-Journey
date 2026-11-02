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
        if (head == nullptr)
            return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* left = head;
        ListNode* right = head->next;
        while (right != nullptr) {
            if (left->val == right->val) {
                int duplicate = left->val;
                while (right != nullptr && right->val == duplicate)
                    right = right->next;

                prev->next = right;
                left = right;
                if (right != nullptr)
                    right = right->next;
            } else {
                prev = left;
                left = right;
                right = right->next;
            }
        }

        return dummy->next;
    }
};