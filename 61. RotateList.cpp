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
    ListNode* rotateRight(ListNode* head, int k) {

        if (k == 0 || head == 0 || head->next == nullptr)
            return head;

        ListNode* temp = head;
        int n = 1;
        while (temp->next != nullptr) {
            temp = temp->next;
            n++;
        }
        k = k % n;
        if (k == 0) {
            return head;
        }
        int terms = n - k;
        ListNode* newtemp = head;
        while (--terms) {
            newtemp = newtemp->next;
          
        }
        ListNode * newhead=newtemp->next;
        temp->next=head;
        newtemp->next=nullptr;
          return newhead;

    }
  
};