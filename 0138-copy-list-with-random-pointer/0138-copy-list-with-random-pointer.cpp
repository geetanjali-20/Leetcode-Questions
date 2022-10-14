/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* iter=head;
        Node* front= head;
        //1- Create copy of orignal nodes
        while(iter!=NULL)
        {
            front=iter->next;
            Node* copy = new Node(iter->val);
            iter->next=copy;
            copy->next=front;
            iter=front;
        }
        iter=head;
        //2- connect random pointers
        while(iter!=NULL)
        {
            if(iter->random!=NULL)
            {
                iter->next->random=iter->random->next;
            }
            iter=iter->next->next;
        }
        
        //3- Extracting orignal list and retreiving copy list
        iter=head;
        Node* newhead = new Node(0);
        Node* copy=newhead;
        while(iter!=NULL)
        {
            front=iter->next->next;
            
            
            //copied list
            copy->next=iter->next;
            
            //orignal list
            iter->next=front;
            
            copy=copy->next;
            iter=front;
        }
        
        return newhead->next;
    }
};