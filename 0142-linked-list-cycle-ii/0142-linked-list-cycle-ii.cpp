/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
            return NULL;
        ListNode* slow=head;
        ListNode* fast =head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow)
            {
                ListNode* temp=head;
                while(slow!=temp)
                {
                    slow=slow->next;
                    temp=temp->next;
                }
            
                return slow;
            }
        }
        return NULL;
    }
};