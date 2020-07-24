void MyQueue:: push(int x)
{
        QueueNode *temp = new QueueNode(x);
        // Your Code
        if(front == NULL)
        {
            front = temp;
            rear = temp;
        }
        else
        {
            rear->next = temp;
            rear = temp;
        }
}

/*The method pop which return the element
  poped out of the queue*/
int MyQueue :: pop()
{
    if(front == NULL)
        return -1;
    if(front == rear)
    {
        QueueNode *temp = front;
        int tempdata = temp ->data;
        front = rear = NULL;
        delete(temp);
        return tempdata;
    }
    else
    {
        QueueNode *temp = front;
        int tempdata = temp -> data;
        front = front -> next;
        delete(temp);
        return tempdata;
    }
    
    
}
