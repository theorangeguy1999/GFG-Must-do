int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node * temp1 = head,*temp2 = head;
       int count = 1;
       while(count < n && (temp2) != NULL)
       {
           temp2 = temp2 -> next;
           count++;
       }
       
       if(temp2 == NULL)
        return -1;
        
    while(temp2->next != NULL)
    {
        temp1 = temp1->next;
        temp2 = temp2 -> next;
    }
    
    return temp1->data;
}
