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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            delete (head);
            return NULL;
        }
        ListNode* pre=head;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL)
        {
            if(slow!=head)
            { 
                pre=pre->next;
            }
            slow=slow->next;
            fast=fast->next->next;
            
        }
        pre->next=slow->next;
        delete (slow);
        return head;
        
    }
};