int getNthFromLast(Node *head, int n)
{
    int k = n-1;
    Node* fast = head;
    Node* slow = head;
    while (k--) {
        fast = fast->next;
        if(fast == NULL)
        {
            return -1;
        }
    }
    while(fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }
    return slow->data;
}
