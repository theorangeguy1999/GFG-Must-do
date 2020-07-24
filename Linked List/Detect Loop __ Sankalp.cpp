bool detectLoop(Node* head)
{
    // your code here
    
    Node *fast = head,*slow = head;
    
    bool loop = false;
    while(slow != NULL && fast != NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow == fast)
        {
            loop = true;
            break;
        }
    }
    
    return loop;
}
