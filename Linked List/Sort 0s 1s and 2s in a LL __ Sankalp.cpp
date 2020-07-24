Node* segregate(Node *head) 
{
    
    // Add code here
    int cnt[3] = {0};
    Node *temp = head;
    while(temp != NULL)
    {
        cnt[temp->data]++;
        temp = temp->next;
    }
    
    int ele = 0;
    temp = head;
    while(temp != NULL)
    {
        while(cnt[ele] == 0)
            ele++;
        temp -> data = ele;
        cnt[ele]--;
        temp = temp -> next;
    }
    
    return head;
    
}
