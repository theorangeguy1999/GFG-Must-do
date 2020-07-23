Node* sortedMerge(Node* head_A, Node* head_B)  
{  
    Node* fhead;
    Node* ftail;
    Node*h1 = head_A;
    Node*h2 = head_B;
    if(h1->data < h2->data)
    {
        fhead = h1;
        ftail = h1;
        h1 = h1->next;
    }
    else
    {
        fhead = h2;
        ftail = h2;
        h2 = h2->next;
    }
    while(h1 != NULL && h2 != NULL)
    {
     if(h1->data < h2->data)
     {
         ftail->next = h1;
         h1 = h1->next;
         ftail = ftail->next;
     }
     else
     {
         ftail->next = h2;
         h2 = h2->next;
         ftail = ftail->next;
     }
    }
    
    while(h1 != NULL)
    {
        ftail->next = h1;
        ftail = ftail->next;
        h1 = h1->next;
    }
    
    while(h2 != NULL)
    {
        ftail->next = h2;
        ftail = ftail->next;
        h2 = h2->next;
    }
    return fhead;
    // code here
} 
