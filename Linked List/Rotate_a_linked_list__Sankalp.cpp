Node* rotate(Node* head, int k)
{
    Node *it = head;
    while(it->next != NULL)
    {
        it = it ->next;
    }
    it->next = head;
    
    Node *end = NULL;
    while(k--)
    {
        end = head;
        head = head->next;
    }
    
    end->next =NULL;
    
    return head;
}
