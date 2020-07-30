struct Compare
{
    bool operator()(Node *a,Node *b)
    {
        return a->data > b->data;
    }
};
Node * mergeKLists(Node *arr[], int N)
{
    Node *head = NULL,*tail=NULL;
    
    priority_queue<Node*,vector<Node*>,Compare> pq;
    
    for(int i = 0 ; i<N ; i++)
    {
        pq.push(arr[i]);
    }
    
    while(!pq.empty())
    {
        Node *temp = pq.top();
        pq.pop();
        
        if(temp->next != NULL)
            pq.push(temp->next);
            
        if(head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail -> next = temp;
            tail = temp;
        }
    }
    
    return head;

}
