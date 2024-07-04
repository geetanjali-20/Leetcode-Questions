ListNode* mergeNodes(ListNode* head) {
int sum=0;
ListNode*prev=NULL;
ListNode*curr=head;
while(curr!=NULL){
if(curr->val==0){
curr->val=sum;
sum=0;
if(prev!=NULL) prev->next=curr;
prev=curr;
}else{
sum+=curr->val;
}
curr=curr->next;
}
return head->next;
}