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


struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    first = reverseList(first);
    second = reverseList(second);
    
    Node * t1 = first;
    Node * t2 = second;
    Node * prev = NULL;
    Node * head = NULL;
    int carry = 0;
    while(t1 != NULL && t2 != NULL)
    {
        int dig = ((t1->data) + (t2->data) + carry)%10;
        carry = ((t1->data) + (t2->data) + carry)/10;
        Node *temp = new Node(dig);
        temp -> next = prev;
        head = temp;
        prev = temp;
        t1 = t1->next;
        t2 = t2->next;
    }
    
    while(t1 != NULL)
    {
        int dig = ((t1->data)+ carry)%10;
        carry = ((t1->data) + carry)/10;
        Node *temp = new Node(dig);
        temp -> next = prev;
        head = temp;
        prev = temp;
        t1 = t1->next;
    }
    
    while(t2 != NULL)
    {
        int dig = ((t2->data) + carry)%10;
        carry = ((t2->data) + carry)/10;
        Node *temp = new Node(dig);
        temp -> next = prev;
        head = temp;
        prev = temp;
        t2 = t2->next;
        
    }
    
    if(carry != 0)
    {
        Node * temp = new Node(carry);
        temp -> next = prev;
        head = temp;
        prev = temp;
    }
    
    return head;
}
