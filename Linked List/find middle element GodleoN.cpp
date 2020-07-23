int getMiddle(Node *head)
{
    //rabbit tortoise method
    Node* slow = head;
    Node* fast = head;
    if(head == NULL)
    {
        return -1;
    }
    else
    {
        while(fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
    }
    return slow->data;
   // Your code here
}
