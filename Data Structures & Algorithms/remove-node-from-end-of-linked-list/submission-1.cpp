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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL)
        {
        
            temp=temp->next;
            cnt++;
        }
        ListNode* temp1=nullptr;
        if(cnt==n)
        {
            temp1=head;
            head=head->next;
            delete temp1;
            return head;
        }
        int node=cnt-n;
        temp=head;
        for(int i=1;i<node;i++)
        {
            temp=temp->next;
        }
        ListNode* temp2=temp->next;
        temp->next=temp->next->next;
        delete temp2;
        return head;
    }
    
};
