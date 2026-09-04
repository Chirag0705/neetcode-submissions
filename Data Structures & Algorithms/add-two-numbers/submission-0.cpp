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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        vector<int>nums;
        int carry=0;
        while(temp1!=NULL&&temp2!=NULL)
        {
            int sum=temp1->val+temp2->val+carry;
            carry=sum/10;
            nums.push_back(sum%10);
            temp1=temp1->next;
            temp2=temp2->next;
        }
        while(temp1!=NULL)
        {
            int sum=temp1->val+carry;
            carry=sum/10;
            nums.push_back(sum%10);
            temp1=temp1->next;
        }
        while(temp2!=NULL)
        {
            int sum=temp2->val+carry;
            carry=sum/10;
            nums.push_back(sum%10);
            temp2=temp2->next;
        }
        if(carry)
        {
            nums.push_back(carry);
        }
        ListNode* dummy=new ListNode(-1);
        ListNode* ptr=dummy;
        for(int i=0;i<nums.size();i++)
        {
            ListNode* newnode=new ListNode(nums[i]);
            ptr->next=newnode;
            ptr=ptr->next;
        }
        return dummy->next;
    }
};
