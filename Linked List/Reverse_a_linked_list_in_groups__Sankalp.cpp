struct node *reverse (struct node *head, int k)
{ 
    // Complete this method
    
    node * prev = NULL, *suc = NULL;
    node * cur = head;
    int cnt = 1;
    
    while(cur != NULL && cnt <=k)
    {
        suc = cur -> next;
        cur -> next = prev;
        prev = cur;
        cur = suc;
        cnt++;
    }
    
    if(suc != NULL)
        head -> next = reverse(suc,k);
        
    return prev;
}
