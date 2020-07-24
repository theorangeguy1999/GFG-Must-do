Node* sortedMerge(Node* head_A, Node* head_B)  
{  
    if(head_A == head_B)
        return head_A;
        
    Node * newhead = NULL;
    Node * t1 = head_A, *t2 = head_B, *t3 = NULL;
    
    if(head_A->data < head_B->data)
    {
        newhead = head_A;
        t1 = t1->bottom;
    }
    else
    {
        newhead = head_B;
        t2 = t2 -> bottom;
    }
    
    t3 = newhead;
    
    while(t1 != NULL && t2 != NULL)
    {
        if(t1->data < t2->data)
        {
            t3 -> bottom = t1;
            t1 = t1->bottom;
            t3 = t3 ->bottom;
        }
        else
        {
            t3 ->bottom = t2;
            t2 = t2 -> bottom;
            t3 = t3->bottom;
        }
        
    }
    
    if(t1 != NULL)
        t3 -> bottom = t1;
    else
        t3 -> bottom = t2;
      
    newhead->next = NULL; 
    return newhead;
    
    
}  

/*  Function which returns the  root of 
    the flattened linked list. */
Node *flatten(Node *root)
{
    
   // Your code here
   if(root == NULL || root->next == NULL)
    return root;
    
   return sortedMerge(root,flatten(root->next));
  
}
