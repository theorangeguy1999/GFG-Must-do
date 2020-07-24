Node* sortedMerge(Node* head_A, Node* head_B)  
{  
    Node * newhead = NULL;
    Node * t1 = head_A, *t2 = head_B, *t3 = NULL;
    
    if(head_A->data < head_B->data)
    {
        newhead = head_A;
        t1 = t1->next;
    }
    else
    {
        newhead = head_B;
        t2 = t2 -> next;
    }
    
    t3 = newhead;
    
    while(t1 != NULL && t2 != NULL)
    {
        if(t1->data < t2->data)
        {
            t3 -> next = t1;
            t1 = t1->next;
            t3 = t3 ->next;
        }
        else
        {
            t3 ->next = t2;
            t2 = t2 -> next;
            t3 = t3->next;
        }
        
    }
    
    if(t1 != NULL)
        t3 -> next = t1;
    else
        t3 -> next = t2;
        
    return newhead;
    
    
}  
