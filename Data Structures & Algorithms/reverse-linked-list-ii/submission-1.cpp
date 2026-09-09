
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
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev=NULL;
        ListNode* temp=head;

        while(temp!=NULL)
        {
            ListNode* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }

        return prev;
    }

    ListNode* findleft(ListNode* temp, int left)
    {
        for(int i=1;i<left-1;i++)
        {
            temp=temp->next;
        }

        return temp;
    }

    ListNode* findright(ListNode* temp, int right)
    {
        for(int i=1;i<right;i++)
        {
            temp=temp->next;
        }

        return temp;
    }

public:
    ListNode* reverseBetween(ListNode* head, int left, int right)
    {
        if(head==NULL || left==right)
        {
            return head;
        }

        ListNode* temp=head;

        ListNode* rightchain=findright(temp,right);
        ListNode* rightnextchain=rightchain->next;

        rightchain->next=NULL;

        ListNode* leftchain;
        ListNode* leftnextchain;
        ListNode* revhead;

        if(left==1)
        {
            leftnextchain=head;

            revhead=reverse(leftnextchain);

            leftnextchain->next=rightnextchain;

            return revhead;
        }
        else
        {
            leftchain=findleft(head,left);

            leftnextchain=leftchain->next;

            leftchain->next=NULL;

            revhead=reverse(leftnextchain);

            leftchain->next=revhead;

            leftnextchain->next=rightnextchain;

            return head;
        }
    }
};
