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
     ListNode* reverseList(ListNode* head) {
        ListNode* curr=head;
        ListNode* prev=nullptr;
        ListNode* next=nullptr;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
     }
public:
    void reorderList(ListNode* head) {
      
        ListNode* temp=head;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* next=nullptr;
        ListNode* end=slow;
        ListNode* revhead=reverseList(slow->next);
        end->next=NULL;
        ListNode* startrev=revhead;
        ListNode* nextrev=startrev;
        while(temp!=revhead&&startrev!=NULL)
        {
            next=temp->next;
            temp->next=startrev;
            nextrev=startrev->next;
            startrev->next=next;
            startrev=nextrev;
            temp=next;
        }
    }
};
