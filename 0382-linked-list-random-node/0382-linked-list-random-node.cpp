class Solution {
public:
    ListNode* mHead;
    
    Solution(ListNode* head) {
        mHead = head;
    }
    
    int getRandom() {
        ListNode* curr = mHead;
        int res = 0, n = 1;
        while (curr) {
            if (rand() % n == 0) {
                res = curr->val;
            }
            n++;
            curr = curr->next;
        }
        return res;
    }
};