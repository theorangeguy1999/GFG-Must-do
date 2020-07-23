Node* segregate(Node *head) {
    
    // Add code here
    Node* temp = head;
    int one = 0 ;
    int two = 0 ; 
    int zero = 0 ;
    while(temp != NULL)
    {
        if(temp->data == 0)
        {
            zero++;
        }
        if(temp->data == 1)
        {
            one++;
        }
        if(temp->data == 2)
        {
            two++;
        }
        temp = temp->next;
    }
    temp = head;
    while(zero--)
    {
        temp->data = 0;
        temp = temp->next;
    }
    while(one--)
    {
        temp->data = 1;
        temp = temp->next;
    }
    while(two--)
    {
        temp->data = 2;
        temp = temp->next;
    }
    
    temp = head;
    return temp;
}
