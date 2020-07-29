void connect(Node *p)
{
    if(p == NULL)
        return;
    
    queue<Node*> q1,q2;
    
    q1.push(p);
    
    while(!q1.empty() || !q2.empty())
    {
        Node * temp = NULL;
        Node * prev = NULL;
        while(!q1.empty())
        {
            temp = q1.front();
            q1.pop();
            if(prev == NULL)
                prev = temp;
            else
            {
                prev->nextRight = temp;
                prev = temp;
            }
            
            if(temp->left)
                q2.push(temp->left);
            if(temp->right)
                q2.push(temp->right);
        }
        if(temp != NULL)
            temp->nextRight = NULL;
            
        temp = NULL;
        prev = NULL;
        while(!q2.empty())
        {
            temp = q2.front();
            q2.pop();
            if(prev == NULL)
                prev = temp;
            else
            {
                prev->nextRight = temp;
                prev = temp;
            }
            
            if(temp->left)
                q1.push(temp->left);
            if(temp->right)
                q1.push(temp->right);
        }
        if(temp != NULL)
            temp->nextRight = NULL;
    }
    return;
}
