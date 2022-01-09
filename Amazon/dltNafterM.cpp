/*
Given a linked list, delete N nodes after skipping M 
nodes of a linked list until the last of the linked list.
*/

class Solution{
    public:

    void linkdelete(struct Node *head, int M, int N){
        
        Node*ptr1 = head;
        
        while(true){
            
            for(int i=0;i<M-1 && ptr1;i++)
                ptr1 = ptr1->next;
            
            if(!ptr1) break;    
            
            Node*ptr2 = ptr1;
            for(int i=0;i<N && ptr2;i++)
                ptr2 = ptr2->next;
            
            if(!ptr2){
                
                ptr1->next = NULL;
                break;
            }    
            
            ptr1->next = ptr2->next;
            ptr1 = ptr1->next;
            
        }

    }
};
