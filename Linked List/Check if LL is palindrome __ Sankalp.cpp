struct Node* reverseList(struct Node *head)
{
    // code here
    // return head of reversed list
    
    Node *prev = NULL;
    Node *cur = head;
    Node *suc = cur;
    
    while(cur != NULL)
    {
        suc = cur->next;
        cur->next = prev;
        prev = cur;
        cur = suc;
    }
    
    return prev;
}

/*You are required to complete this method */
bool isPalindrome(Node *head)
{
    int len = 0;
    Node * temp = head;
    while(temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    
    int revpoint = (len%2 == 0)?len/2:len/2+1;
    
    Node *head2 = head;
    
    while(revpoint--)
    {
        head2 = head2 -> next;
    }
    
    head2 = reverseList(head2);
    Node *t1 = head, *t2 = head2;
    
    while(t2 != NULL)
    {
        if(t1->data != t2 -> data)
            return false;
        t1 = t1->next;
        t2 = t2->next;
    }
    
    return true;
}
