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
    ListNode* reverse(ListNode* dummy)
    {
        ListNode* pre = NULL;
        ListNode* curr = dummy;
        ListNode* next;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=pre;
            pre=curr;
            curr=next;
        }
        return pre;
            
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverse(l1);
        l2=reverse(l2);
        ListNode* ans= new ListNode(-1);
        ListNode* temp=ans;
        int carry=0;
        while((l1!=NULL || l2!=NULL) || carry)
        {
            int sum=0;
            if(l1!=NULL)
            {
                sum+=l1->val;
                l1=l1->next;
                
            }
            if(l2!=NULL)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            sum+=carry;
            carry=sum/10;
            ListNode* node = new ListNode(sum%10);
            temp->next=node;
            temp=temp->next;
            
        }
        
        return reverse(ans->next);
    }
};