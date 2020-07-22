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
