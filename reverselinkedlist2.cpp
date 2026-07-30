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

     
    ListNode* reverse(ListNode* head)
    {
        ListNode *prev=NULL;
        ListNode *curr=head;
        while(curr!=NULL)
        {
            ListNode *nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if(head==NULL||left==right)
        {
            return head;
        }

        ListNode * prevleft=nullptr;
        ListNode *leftNode =head;
        int pos=1;
        while(pos<left)
        {
            prevleft=leftNode;
            leftNode=leftNode->next;
            pos++;
        }
        ListNode *rightNode=leftNode;
        while(pos<right)
        {
            rightNode=rightNode->next;
            pos++;
        }

        ListNode *afterright=rightNode->next;
        rightNode->next=nullptr;

        ListNode *newhead=reverse(leftNode);

        if(prevleft!=NULL)
        {
            prevleft->next=newhead;

        }
        else
        {
            head=newhead;
        }
        leftNode->next=afterright;

        return head;

        
        
        
    }
};
